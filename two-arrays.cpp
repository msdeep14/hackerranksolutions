//https://www.hackerrank.com/challenges/two-arrays
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,k;
	int arr[1000],brr[1000];
	cin>>t;
	while(t--)
	{
		int flag=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
			cin>>brr[i];
		sort(arr,arr+n);
		sort(brr,brr+n);
		for(int i=0;i<n;i++)
		{
			if(arr[i]+brr[n-1-i]>=k)
				continue;
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}
	return 0;
}
