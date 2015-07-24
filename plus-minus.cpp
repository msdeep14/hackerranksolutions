//https://www.hackerrank.com/challenges/plus-minus
//mandeep singh @msdeep14
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,j,countplus=0,countminus=0,countzero=0;
	int arr[200];
	float n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<0)
			countminus++;
		else if(arr[i]>0)
			countplus++;
		else
			countzero++;
	}
	printf("%.3f\n%.3f\n%.3f\n",(countplus/n),(countminus/n),(countzero/n));
}
