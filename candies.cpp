//https://www.hackerrank.com/challenges/candies
#include<iostream>
using namespace std;
int main()
{
	int n;
	long long int sum=0;
	int arr[100000];
	int brr[100000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		brr[i]=1;
	}
	sum=n;
	long long int temp;
	for(int i=0;i<(n-1);i++)
	{
		if(arr[i+1]>arr[i])
		{
			temp=brr[i+1];
			brr[i+1]=brr[i] + 1;
			sum+=brr[i+1]-temp;
		}
	}
	for(int i=n-1;i>0;i--)
	{
		if(arr[i-1]>arr[i] && brr[i-1]<=brr[i])
		{
			temp=brr[i-1];
			brr[i-1]= brr[i]+1;
			sum+=brr[i-1]-temp;
		}
	}
	cout<<sum;
	return 0;
}
