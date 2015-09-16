//https://www.hackerrank.com/challenges/dijkstrashortreach
//mandeep singh @msdeep14
#include<iostream>
#include<vector>
#include<limits.h>
#include<cstdio>
using namespace std;
struct vec
{
	int wt;
	int src;
	int dest;
	int track;
};

class dijshktra
{
	public:
	void creategraph(vector <vector <vec> > &g,int v);
	void calpathcost(vector <vector <vec> > &g,int strtver,int v);
};
void dijshktra :: creategraph(vector <vector <vec> > &g,int v)
{
	int src,dest,cost;
	vec temp;
		cin>>src>>dest>>cost;
		temp.dest=dest;
		temp.src=src;
		temp.wt=cost;
		temp.track=INT_MAX;
		g[src-1].push_back(temp);
		vec temp1;
		temp1.dest=src;
		temp1.src=dest;
		temp1.wt=cost;
		temp1.track=INT_MAX;
		g[dest-1].push_back(temp1);

}

int check(int visited[], int i)
{
	int flag;
	if(i==visited[i])
		flag=0;
	else
		flag=1;
	return flag;
}

void dijshktra :: calpathcost(vector <vector <vec> > &g,int strtver,int v)
{
	int mindis[3000];
	int store[3000];
	int visited[3000];
	int i,j,newvertex;
	int temp=strtver;
    int temp1=strtver;
    visited[0]=0;
	visited[strtver]=strtver;
	for(i=0;i<=v;i++)
	{
		visited[i]=INT_MAX;
	}
	for(i=1;i<=v;i++)
	{
		store[i]=0;
	}
	for(i=0;i<=v;i++)
	{
		mindis[i]=INT_MAX;
	}
	int x=0;
	mindis[strtver]=0;
	int mark=0;
	while(mark<(v))
	{
		for(i=0;i<g[strtver-1].size() ;i++)
		{

			if(mindis[g[strtver-1][i].dest]>=(g[strtver-1][i].wt + x) && ((check(visited,g[strtver-1][i].dest)) ))
			{
				mindis[g[strtver-1][i].dest]=g[strtver-1][i].wt + x;
			}
		}
		int min=INT_MAX;
		for(j=1;j<=v;j++)
		{
			if(min>mindis[j] && j!=strtver && check(visited,j))
			{
				min=mindis[j];
				newvertex=j;
			}
		}
		visited[newvertex]=newvertex;
		store[temp]=mindis[newvertex];
		x=min;
		temp=strtver;
		strtver=newvertex;
		mark++;
	}
	for(i=1;i<=v;i++)
	{
        if(i!=temp1)
		{
			if(mindis[i]==INT_MAX)
				cout<<"-1 ";
			else
				cout<<mindis[i]<<" ";
		}
	}
	cout<<endl;
}

int main()
{
	int n,m,t;
	vector <vector <vec> > g;
	int strtver,v;
    cin>>t;
    while(t--)
        {
	dijshktra dj;
	cin>>n>>m;
    g.resize(m);
	int i,j;
    for(i=0;i<m;i++)
    {
	   dj.creategraph(g,n);
    }
     cin>>strtver;
	dj.calpathcost(g,strtver,n);
    g.clear();

    }
	return 0;
}
