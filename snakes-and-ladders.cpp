//snakes and ladders
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
	void init(vector <vector <vec> > &g);
	void creategraph(vector <vector <vec> > &g,int v);
	void calpathcost(vector <vector <vec> > &g,int strtver,int v,int s[]);
};

void dijshktra :: init(vector <vector <vec> > &g)
{
	vec temp;
	int i,j,x;
	for(i=0;i<94;i++)
	{
		x=i+2;
		for(j=0;j<6;j++)
		{
			temp.dest=x;
			x++;
			temp.src=i+1;
			temp.wt=1;
			temp.track=INT_MAX;
			g[i].push_back(temp);
		}
	}
	int y=5;
	for(i=94;i<99;i++)
	{
		x=i+2;
		for(j=0;j<y;j++)
		{
			temp.dest=x;
			x++;
			temp.src=i+1;
			temp.wt=1;
			temp.track=INT_MAX;
			g[i].push_back(temp);
		}
		y--;
	}

}

void dijshktra :: creategraph(vector <vector <vec> > &g,int v)
{
	int src,dest;
	vec temp;
		cin>>src>>dest;
		temp.dest=dest;
		temp.src=src;
		temp.wt=0;
		temp.track=INT_MAX;
		g[src-1].push_back(temp);
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

void dijshktra :: calpathcost(vector <vector <vec> > &g,int strtver,int v,int s[])
{
	int mindis[3000];
	int store[3000];
	int visited[3000];
	int i,j,newvertex;
	int newflag=0;
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
	int tempwt=0;
	while(mark<(v))
	{
		for(i=0;i<g[strtver-1].size() ;i++)
		{

			if(mindis[g[strtver-1][i].dest]>=(g[strtver-1][i].wt + x) && ((check(visited,g[strtver-1][i].dest)) ))
			{
				mindis[g[strtver-1][i].dest]=g[strtver-1][i].wt + x;
				tempwt=g[strtver-1][i].wt + x;
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

			if(mindis[i]==INT_MAX)
				cout<<"-1\n";
			else
				cout<<mindis[100]<<endl;

}

int main()
{
	int n,m,t;
	vector <vector <vec> > g;
	int s[105];
	int strtver,v;
    cin>>t;
	int src,dest;
    while(t--)
     {
	dijshktra dj;

	cin>>n;

			for(int y=0;y<105;y++)
			{
				s[y]=0;
			}
    g.resize(101);
	int i,j;
    for(i=0;i<n;i++)
    {
	   dj.creategraph(g,n);
    }
	 dj.init(g);
	 cin>>m;
	 for(i=0;i<m;i++)
	 {
		 vec temp;
		cin>>src>>dest;
		s[src]=1;
		temp.dest=dest;
		temp.src=src;
		temp.wt=0;
		temp.track=INT_MAX;
		g[src-1].push_back(temp);
		 
	 }
	 int countn=0;
	 int maxn=0;
	 int flagn=0;
	 for(int i=0;i<101;i++){
		 if(s[i]==1)
		 {
			 countn++;
			 flagn=1;
		 }
		 else{
			 flagn=0;
		 }
		 if(countn>maxn){
			 maxn=countn;
		 }
		 if(flagn==0){
			 countn=0;
		 }
	 }
	 if(maxn>6)
	 {
		 cout<<"-1\n";
	 }
else{
	 strtver=1;
	dj.calpathcost(g,strtver,100,s);
}
    g.clear();
    }
	return 0;
}

