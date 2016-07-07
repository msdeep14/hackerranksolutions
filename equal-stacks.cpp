#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#define ll long long int
using namespace std;
ll arr[100005],brr[100005],crr[100005];
ll calmax(ll a,ll b,ll c){
	if((a>=b &&a>=c)) return 1;
	else if(b>=a&&b>=c) return 2;
	else if(c>=a&&c>=b) return 3;
	else return 0;
}
int main(){
	ll n1,n2,n3;
	
	ll a=0,b=0,c=0;
	cin>>n1>>n2>>n3;
	for(int i=0;i<n1;i++){
		cin>>arr[i];
		a+=arr[i];
	}
	for(int i=0;i<n2;i++){
		cin>>brr[i];
		b+=brr[i];
	}
	for(int i=0;i<n3;i++){
		cin>>crr[i];
		c+=crr[i];
	}
	ll flag=1;
	if(a==b&&b==c){
		cout<<a;
		//exit(0);
		flag=0;
	}
	
	
	ll i=0,j=0,k=0;
	while(flag){
		if(a==b&&b==c){
		cout<<a;
		flag=0;
		//exit(0);
	}
		ll x=calmax(a,b,c);
		if(x==1){
			a-=arr[i];
			i++;
		}
		else if(x==2){
			b-=brr[j];
			j++;
		}
		else if(x==3){
			c-=crr[k];
			k++;
		}
	}
	return 0;
}
