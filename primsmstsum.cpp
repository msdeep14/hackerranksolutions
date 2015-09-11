//hackerrank_prim-vector;
//mandeep singh @msdeep14
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
struct vec
{
	int dest;
	int src;
	int wt;
	int track;
};
int check(int visited[],int dest,int n)
{
    int flag=0,c=0;
        if(dest==visited[dest])
            {c=0;
            flag=1;
    }
        if(flag==0)
        c=1;
    return c;
}

int main()
{
	vector<vector <vec> > g;
	int a,b,i,j,k,l,x;
	int visited[3000];
	int sumwt=0;
	int n,m,wtt,strtver;
	int keeptrack[3000];
	cin>>n>>m;
	g.resize(m+1);
	for(i=0;i<=n;i++)
	{
		visited[i]=-1;
	}
	vec temp;
	for(i=0;i<m;i++)
	{
		cin>>a>>b>>wtt;
		temp.dest=b;
		temp.src=a;
		temp.wt=wtt;
		temp.track=INT_MAX;
		g[a-1].push_back(temp);
		g[b-1].push_back(temp);
	}
	cin>>strtver;
	int min=INT_MAX;
	int node1;

	k=0;
	int node;
	keeptrack[k]=strtver;
	k++;
	int size=k;
	visited[strtver]=strtver;
	while(size!=n)
	{
	for(j=0;j<size;j++)
	{
		strtver=keeptrack[j]-1;
		for(i=0;i<g[strtver].size();i++)
		{
			if(min>g[strtver][i].wt)
			{
			    if(check(visited,g[strtver][i].dest,n) )
                {
                    min=g[strtver][i].wt;
                    node=g[strtver][i].dest;
                    node1=strtver;
                    x=i;
                }
                else if(check(visited,g[strtver][i].src,n))
                {
                     min=g[strtver][i].wt;
                    node=g[strtver][i].src;
                    node1=strtver;
                    x=i;
                }
			}
		}
	}
		//when node is visited mark it in the visited array;
		visited[node]=node;
		sumwt=sumwt+g[node1][x].wt;
		keeptrack[k]=node;
		k++;
		min=INT_MAX;
	size=k;
	}
	cout<<sumwt<<endl;
	return 0;
 }
