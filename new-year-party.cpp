//https://www.hackerrank.com/contests/hourrank-4/challenges/new-year-party
#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr [100000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int x=arr[0];
	int count=0;
	int sum=arr[0];
	for(int i=1;i<n;i++)
	{

		if(arr[i]==arr[i-1])
		{
			sum+=1;
			count+=1;
			x=arr[i];
		}
		else
		{
			if(sum>=arr[i])
			{
				sum+=1;
			}
			if(sum<arr[i])
			{
				sum=arr[i];
			}


			count=0;

		}
	}
	cout<<sum;
}
