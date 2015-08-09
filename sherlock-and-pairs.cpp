//https://www.hackerrank.com/chaunsigned long longenges/sherlock-and-pairs
//mandeep singh @msdeep14
#include<iostream>
#include<string.h>
using namespace std;
void merge(unsigned long long int arr[],unsigned long long  int l,unsigned long long int m,unsigned long long int r)
{
	unsigned long long int i,j,k;
	unsigned long long int n1=m-l+1;
	unsigned long long int n2=r-m;
	unsigned long long int L[n1], R[n2];
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
void mergesort(unsigned long long int arr[],unsigned long long int l,unsigned long long int r)
{
	if(l<r)
	{
		unsigned long long int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}

int main()
{
	unsigned long long int i,j,k,t,n,flag=0,totalpair=0,x=0,count=0;
	unsigned long long int arr[100000];
	cin>>t;
	while(t--)
	{
		totalpair=0;
		flag=0;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>arr[i];
		//now sort the arr;
		mergesort(arr,0,n-1);
		//array is sorted now; check for equal no.s;
		for(i=0;i<n-1;i++)
		{
			count=0;
			flag=0;
			do
			{
				flag=0;
				if(arr[i]==arr[i+1])
				{
					flag=1;
					i++;
					count++;
				}
			}while(flag==1);
			if(flag==0)
			{
				//check count;
				totalpair=totalpair + (count+1)*count;
			}
		}
		cout<<totalpair<<endl;
	}
	
	return 0;
}
