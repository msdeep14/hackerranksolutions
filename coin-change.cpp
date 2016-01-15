//https://www.hackerrank.com/challenges/coin-change
//mandeep singh @msdeep14
#include<iostream>
#include<string.h>
using namespace std;
/*
int count(int s[],int m,int n)
{
	if(n==0)
		return 1;
	if(n<0)
		return 0;
	if(m<=0 && n>=1)
		return 0;
	return count(s,m-1,n)+count(s,m,n-s[m-1]);
}
*/

/*
int count(int s[],int m,int n)
{
	int table[n+1];
	memset(table,0,sizeof(table));
	table[0]=1;
	for(int i=0;i<m;i++)
	{
		for(int j=s[i];j<=n;j++)
		{
			table[j]+=table[j-s[i]];
		}
	}
	return table[n];
}
*/

long long int count(long long int s[],long long int m,long long int n)
{
	long long int table[n+1][m];
	long long int x,y;
	for(int i=0;i<m;i++)
		table[0][i]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<m;j++)
		{
			x=(i-s[j]>=0)?table[i-s[j]][j]: 0;
			y=(j>=1)?table[i][j-1]: 0;
			table[i][j]=x+y;
		}
	}
	return table[n][m-1];
}

int main()
{
	long long int m,n;
	long long int arr[10000];
	cin>>n>>m;
	for(int i=0;i<m;i++)
		cin>>arr[i];
	long long int x=count(arr,m,n);
	cout<<x;
	return 0;
}
