//https://www.hackerrank.com/challenges/floyd-city-of-blinding-lights
//mandeep singh @msdeep14
#include<iostream>
#define INT_MAX 99999;
using namespace std;
int main()
{
	int i,j;
	int d[401][401];
	int m,n,a,b,wt,q,src,dest;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
				d[i][j]=0;
			else
				d[i][j]=INT_MAX;
		}
	}
	for(i=0;i<m;i++)
	{
		cin>>src>>dest>>wt;
		d[src][dest]=wt;
	}
	for(int k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(d[i][k]+d[k][j]<d[i][j])
				{
					d[i][j]=d[i][k] + d[k][j];
				}
			}
		}
	}
	
	cin>>q;
	while(q--)
	{
		cin>>a>>b;
		if(d[a][b]==99999)
			cout<<"-1"<<endl;
		else
			cout<<d[a][b]<<endl;
	}
	return 0;
}
