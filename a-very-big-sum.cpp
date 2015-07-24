//https://www.hackerrank.com/challenges/a-very-big-sum
//mandeep singh @msdeep14
#include<iostream>
using namespace std;
int main()
{
	long long int i,n,arr[20],sum=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
		sum=sum+arr[i];
	cout<<sum;
	return 0;
}
