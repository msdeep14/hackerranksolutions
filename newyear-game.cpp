//https://www.hackerrank.com/contests/hourrank-4/challenges/newyear-game
#include<iostream>
using namespace std;
int main()
{
	int t,n,x;
	cin>>t;
	while(t--)
	{
		int n0=0;
		int n1=0;
		int n2=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x%3==0) n0++;
			else if(x%3==1) n1++;
			else if(x%3==2) n2++;
		}
		if(n1%2==0 && n2%2==0) cout<<"Koca\n";
		else cout<<"Balsa\n";
	}
	return 0;
}
