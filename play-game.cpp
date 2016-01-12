//https://www.hackerrank.com/challenges/play-game
//mandeep singh @msdeep14
#include<iostream>
#include<algorithm>
#include<cstring>
#define ll long long 
using namespace std;
int main()
{
	ll int t,n;
	ll int score[100001];
	ll int sum[100001];
	ll int best[100001];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>score[i];
		}
		for(int i=1;i<=n+1;i++)
		{
			sum[i]=0;
			best[i]=0;
		}
		//memset(sum,0,n+1);
		//memset(best,0,n+1);
		for(int i=n;i>=1;i--)
		{
			sum[i]=score[i] + sum[i+1];
		}
		best[n]=sum[n];
		best[n-1]=sum[n-1];
		best[n-2]=sum[n-2];
		for(int i=n-3;i>=1;i--)
		{
			for(int j=1;j<=3;j++)
			{
				best[i]=max(best[i],sum[i]-best[i+j]);
			}
		}
		cout<<best[1]<<endl;
	}
	return 0;
}
