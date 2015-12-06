//mandeep singh @msdeep14
//counting sort 1
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	int arrcount[100];
	cin>>n;
	for(i=0;i<100;i++)
	{
		arrcount[i]=0;
	}
	int num;
	for(i=0;i<n;i++)
	{
		cin>>num;
		arrcount[num]++;
	}
	for(i=0;i<100;i++)
	{
		cout<<arrcount[i]<<" ";
	}
	return 0;
}
