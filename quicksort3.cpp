//https://www.hackerrank.com/challenges/quicksort3
//mandeep singh @msdeep14
#include<iostream>
#include<stdlib.h>
using namespace std;
int partision(int a[],int start,int end,int size)
{
	int temp;
	int pivot=a[end];
	int pindex=start;
	for(int i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			temp=a[i];
			a[i]=a[pindex];
			a[pindex]=temp;
			pindex++;
		}
	}
	temp=a[pindex];
	a[pindex]=a[end];
	a[end]=temp;
	for(int j=0;j<size;j++)
		cout<<a[j]<<" ";
	cout<<"\n";
	return pindex;
}
void quicksort(int a[],int start,int end,int size)
{
	if(start<end)
	{
		int pindex=partision(a,start,end,size);
		quicksort(a,start,pindex-1,size);
		quicksort(a,pindex+1,end,size);
	}
}

int main()
{
	int i,j,n;
	int arr[5000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	quicksort(arr,0,n-1,n);
	return 0;
}
