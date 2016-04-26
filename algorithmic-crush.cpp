//algorithmic crush
#include<iostream>
using namespace std;
long long int arr[10000005];
int main()
{
	long long int n,m,a,b,k;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b>>k;
		arr[a]+=k;
		if(b+1<=n) arr[b+1]-=k;
	}
	long long int ans=0,max=0;
	
	for(int i=1;i<=n;i++){
		ans=ans+arr[i];
		if(ans>max) max=ans;
	}
	cout<<max;
	return 0;
}
