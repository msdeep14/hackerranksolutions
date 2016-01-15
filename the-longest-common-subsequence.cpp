//https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence
//mandeep singh @msdeep14
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int m[101][101];
	int ver[101];
	int hor[101];
	int store[101];
	int n,l;
	cin>>n>>l;
	ver[0]=0;
	hor[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>hor[i];
	}
	for(int i=1;i<=l;i++)
	{
		cin>>ver[i];
	}
	for(int i=0;i<=l;i++)
	{
		for(int j=0;j<=n;j++)
		{
			m[i][j]=0;
		}
	}
	for(int i=1;i<=l;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(ver[i]==hor[j])
			{
				m[i][j]=m[i-1][j-1]+1;
			}
			else
			{
				m[i][j]=max(m[i-1][j],m[i][j-1]);
			}
		}
	}
	int x,y;
	int z=0;
	for(int i=l,j=n;i>0 && j>0;j-=y,i-=x)
	{
		if(ver[i]==hor[j])
		{
			store[z]=ver[i];
			z++;
			x=1;
			y=1;
		}
		else
		{
			if(m[i][j-1]<=m[i-1][j])
			{
				y=0;
				x=1;
			}
			else
			{
					x=0;
					y=1;
			}
		}
	}
	for(int i=z-1;i>=0;i--)
	{
		cout<<store[i]<<" ";
	}

	return 0;
}
