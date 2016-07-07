#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
#define ll long long int
using namespace std;
int main(){
		ll n;
		ll flag=0;
		ll arr[1005];
		cin>>n;
		ll min=INT_MAX;
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]==arr[j]){
					flag=1;
					ll x=abs(i-j);
					if(x<min) min=x;
				}
			}
		}
		(flag==1)?cout<<min:cout<<"-1";
		return 0;
}
