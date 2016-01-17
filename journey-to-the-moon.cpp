//https://www.hackerrank.com/challenges/journey-to-the-moon
//mandeep singh @msdeep14
#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;
stack<int> s;
int dfs(vector<vector <int> > &g,int taken[],int val)
{
	s.push(val);
	int count=1;
	taken[val]=val;
	while(!s.empty())
	{
		int x=s.top();

		for(int i=0;i<g[x].size();i++)
		{
		   
			if(g[x][i]!=taken[g[x][i]])
			{
				taken[g[x][i]]=g[x][i];
				s.push(g[x][i]);
				count++;
				x=s.top();
				i=-1;
			}
		}
		s.pop();
	}
	return count;
}


int main()
{
	int n,k;
	int a,b,x;
    long long res=0;
	vector<vector <int> > g;
	cin>>n>>k;
	g.resize(n+1);
	int taken[100004];
	for(int i=0;i<=n;i++)
	{
		taken[i]=INT_MAX;
	}

	for(int i=0;i<k;i++)
	{
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	for(int i=0;i<n;i++)
	{
		if(i!=taken[i])
		{
			x=dfs(g,taken,i);
			res+=x*(n-x);
		}
	}
	res=res/2;
	cout<<res<<endl;
	return 0;
}
