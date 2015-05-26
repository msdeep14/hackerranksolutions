//https://www.hackerrank.com/challenges/sansa-and-xor
//mandeep singh @msdeep14
//for even array size xor=0;
/*
for odd array size xor is xor of all the odd index elements;
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,t,n,ans;
	int arr[100000];
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(n%2==0)
			ans=0;
		else 
		{
			//calculate xor of all odd index elements;
            ans=arr[0];
			for(i=2;i<n;i++)
			{
				if(i%2==0)
					ans=ans ^ arr[i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
