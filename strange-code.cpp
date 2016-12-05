//mandeep singh @msdeep14
//
#include<bits/stdc++.h>
#define ll long long int
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define inf INT_MAX
#define vi vector<int>
#define vl vector<ll>
#define si set<int>
#define msi multiset<int>
#define fr0(i,a,b) for(int i=a;i<b;i++)
#define fr1(i,a,b) for(int i=a;i<=b;i++)
#define frn0(i,a,b) for(int i=b-1;i>=0;i--)
#define frn1(i,a,b) for(int i=b;i>=a;i--)
using namespace std;
const int asize= 100005;
const int  mod = 1000000007;
long long int mx=-inf;
long long int mi=inf;
int main(){
	ll t,x,sum=0;
	cin>>t;
	sum=0;
	x=3;
	bool flag=true;
	while(flag==true){
		sum+=x;
		if(t<=sum){
			flag=false;
			break;
		}
		else x=2*x;
	}
	ll ans=sum-t;
	ans=1+ans;
	cout<<ans<<endl;
	return 0;
}
