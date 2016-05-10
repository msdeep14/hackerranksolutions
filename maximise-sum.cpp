//hackerrank maximise-sum
#include<iostream>
#include<algorithm>
#include<set>
#define ll long long int
using namespace std;
int main(){
	ll n,m,t;
	ll arr[100005];
	ll p[100005];
	set<ll> s;
	cin>>t;
	while(t--){
		ll res=0;
		ll max_end=0;
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>arr[i];
		p[0]=arr[0]%m;
		s.insert(p[0]);
		res=p[0];
		for(int i=1;i<n;i++){
			p[i]=(p[i-1]+arr[i]%m)%m;
			max_end=p[i];
			set<ll> ::iterator prev;
			prev=s.upper_bound(p[i]);
			if(prev!=s.end()){
				max_end=(p[i]-*prev+m)%m;
			}
			res=max(res,max_end);
			s.insert(p[i]);
		}  
		
		cout<<res<<endl;
		s.clear();
	}
	return 0;
}
