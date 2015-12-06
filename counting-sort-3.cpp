//mandeep singh @msdeep14
//counting sort 3
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,x,sum=0,i,j;
	int arr[100];
	char str[10];
	for(i=0;i<100;i++)
	{
		arr[i]=0;
	}
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		cin>>str;
		arr[x]++;
		
	}
	for(i=0;i<100;i++)
	{
		sum=sum+arr[i];
		cout<<sum<<" ";
	}
	return 0;
}
