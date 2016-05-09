//hackerrank almost sorted
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,l=1,r,i;
	int arr[100005];
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>arr[i];
	}
	int store[3];
	int count=0;
	int x=0;
	int flag1=0;
	int flag2=0;
	for(i=1;i<n;i++){
		if(arr[i]>arr[i+1]){
			count++;
		}
		if(count==1 && flag1==0){
                store[x++]=i;
		flag1=1;}
		else if(count==2 && flag2==0) {store[x++]=i+1;
		flag2=1;}
		if(count>2) break;
	}
	int flag=0;
	if(count==2){
		swap(arr[store[0]],arr[store[1]]);
		flag=1;
	}
	if(flag==0){
	for(i=1;i<n;i++){
		if(arr[i]>arr[i+1]){
			l=i;
			break;
		}
	}
	for(i=l;i<n;i++){
		if(arr[i]<arr[i+1]){
			r=i;
			break;
		}
	}
	if(i==n) r=n;
	reverse(arr+l,arr+r+1);
	}
	for(i=1;i<n;i++){
		if(arr[i]>arr[i+1]) break;
	}
	if(i!=n) cout<<"no";
	else if(l==r) cout<<"yes";
    else if(l==r-1) cout<<"yes\nswap "<<l<<" "<<r;
	else if(flag==1) cout<<"yes\nswap "<<store[0]<<" "<<store[1];
	else cout<<"yes\nreverse "<<l<<" "<<r;
	return 0;
}
