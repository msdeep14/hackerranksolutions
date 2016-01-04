////https://www.hackerrank.com/contests/infinitum12/challenges/polynomial-and-its-roots
#include<iostream>
using namespace std;
int main()
{
	long long int n,a,i,j,sum,pr;
	long long int arr[3];
	cin>>n;
	if(n>1)
	{
	for(i=0;i<=n;i++)
	{
		cin>>a;
		if(i==0)
			arr[0]=a;
		else if(i==(n-1))
			arr[1]=a;
		else if(i==n)
			arr[2]=a;
	}
	sum=(-arr[1])/arr[2];
	if(n%2==0)
		pr=(arr[0])/(arr[2]);
	else
		pr=(-arr[0])/(arr[2]);
	}
	else if(n==1)
	{
		for(i=0;i<=n;i++)
		{
			cin>>a;
			arr[i]=a;
		}
		sum=-(arr[0]/arr[1]);
		pr=-(arr[0]/arr[1]);
	}
	cout<<sum<<" "<<pr;
	return 0;
}
