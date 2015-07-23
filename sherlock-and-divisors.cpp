//https://www.hackerrank.com/challenges/sherlock-and-divisors
//mandeep singh @msdeep14
#include<iostream>
using namespace std;
int main()
{
	int i,j,t,n,count=0;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>n;
		for(i=1;i*i<=n;i++) if(n%i==0)
		{
			if(i%2==0) count++;
			if(i*i!=n && n/i%2==0) count++;
		}
		cout<<count<<endl;
	}
	return 0;
	
}
