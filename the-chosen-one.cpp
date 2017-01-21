//mandeep singh @msdeep14
//
#include<bits/stdc++.h>
#define ll long long int
#define fe first
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
#define frn0(i,a,b) for(int i=b-1;i>=a;i--)
#define frn1(i,a,b) for(int i=b;i>a;i--)
using namespace std;
const int asize= 100005;
const int  mod = 1000000007;
long long int mx=-inf;
long long int mi=inf;
ll arr[asize];
ll gf[asize+5],gr[asize+5];
ll gcd(ll a,ll b){
	while(a&&b){
		if(a>=b)
			a=a%b;
		else 
			b=b%a;
	}
	return a+b;
}
int main(){
	ll n;
	cin>>n;
	fr0(i,0,n){
		cin>>arr[i];
	}	
	if(n==1){
		cout<<arr[0]+1<<endl;
		return 0;
	}
	fr0(i,0,n){
		gf[i+1]=gcd(gf[i],arr[i]);
	}
	ll j=0;
	frn0(i,0,n){
		gr[j+1]=gcd(gr[j],arr[i]);
		j++;
	}
	fr0(i,0,n){
		ll x=gcd(gf[i],gr[n-i-1]);
		if(arr[i]%x!=0){
			cout<<x<<endl;
			return 0;
		}
	}
	return 0;
}
