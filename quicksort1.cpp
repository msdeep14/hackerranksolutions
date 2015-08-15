//https://www.hackerrank.com/challenges/quicksort1
//mandeep singh @msdeep14
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i,j,k,temp;
	int arr[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	j=n-1;
	for(i=n-1;i>0;i--)
	{
		if(arr[i]>arr[0])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j--;
		}
	}
	temp=arr[j];
	arr[j]=arr[0];
	arr[0]=temp;
	
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
	
}
