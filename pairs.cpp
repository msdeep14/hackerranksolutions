//https://www.hackerrank.com/challenges/pairs
//mandeep singh @msdeep14
#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1], R[n2];
	for(i=0;i<n1;i++)
		L[i]=arr[l+i];
	for(j=0;j<n2;j++)
	{
		R[j]=arr[m+1+j];
	}
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}
void mergesort(int arr[], int l, int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}

int main()
{
	int i,j,n,k,count=0;
	int arr[100000];
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>arr[i];
	mergesort(arr,0,n-1);
	for(i=n-1;i>0;i--)
	{
		for(j=i-1;j>=0;j--)
		{
			if(arr[i]-arr[j]==k)
				count++;
			else if(arr[i]-arr[j]>k)
				break;
		}
	}
	cout<<count;
	return 0;
}
