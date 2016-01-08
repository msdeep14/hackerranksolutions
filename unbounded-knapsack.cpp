//https://www.hackerrank.com/challenges/unbounded-knapsack
#include<iostream>
#include<cstring>
using namespace std;
int count(int s[],int m,int n)
{
	int table[n+1];
	int x;
	memset(table,0,sizeof(table));
	table[0]=1;
	for(int i=0;i<m;i++)
	{
		for(int j=s[i];j<=n;j++)
		{
			table[j]+=table[j-s[i]];
		}
	}
	for(int i=n;i>=0;i--)
	{
		if(table[i]>0)
		{
			x=i;
			break;
		}
	}
	return x;
}
int main()
{
	int t,m,k;
	int arr[2000];
	cin>>t;
	while(t--)
	{
		cin>>m>>k;
		for(int i=0;i<m;i++)
		{
			cin>>arr[i];
		}
		int x=count(arr,m,k);
		cout<<x<<endl;
	}
	return 0;
}
