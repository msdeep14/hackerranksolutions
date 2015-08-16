//https://www.hackerrank.com/challenges/quicksort4
//mandeep singh @msdeep14
#include<iostream>
#include<stdlib.h>
using namespace std;
int qswap=0,iswap=0;
int insertion(int a[], int s)
{
    int i, j;
    int current;
    
    for(i = 1; i< s; i++)
    {
        current = a[i];
        for(j = i-1; j>=0; j--)
        {
            if(current < a[j])
			{   a[j+1] = a[j];
				iswap++;
			}
            else
                break;
        }
        a[j+1] = current; 
    }
	return iswap;
}


int partision(int a[],int start,int end,int iswap)
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
			qswap++;
			pindex++;
		}
	}
	temp=a[pindex];
	a[pindex]=a[end];
	a[end]=temp;
	qswap++;
	iswap=iswap-qswap;
	return pindex;
}
int quicksort(int a[],int start,int end,int iswap)
{
	if(start<end)
	{
		int pindex=partision(a,start,end,iswap);
		iswap=quicksort(a,start,pindex-1,iswap);
		iswap=quicksort(a,pindex+1,end,iswap);
	}
	return iswap;
}

int main()
{
	int i,j,n;
	int arr[1000],brr[1000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
		brr[i]=arr[i];
	iswap=insertion(arr,n);
	iswap=quicksort(brr,0,n-1,iswap);
	cout<<(iswap-qswap);
	return 0;
}
