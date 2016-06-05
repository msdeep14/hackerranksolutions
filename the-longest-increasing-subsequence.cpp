//hackerrank longest increasing subsequence
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int dp[1000005],arr[1000005];
int search(vector<int> &v,int ele){
	int x=0,y=v.size()-1,mid,index=0;
	while(x<=y){
		mid=(x+y)/2;
		if(ele==v[mid]) return mid;
		else if(ele>v[mid]) x=mid+1 ,index=x;
		else if(ele<v[mid]) y=mid-1;
	}
	return index;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	vector<int> v;
	v.push_back(arr[0]);
	for(int i=1;i<n;i++){
		if(arr[i]>=v[v.size()-1]) v.push_back(arr[i]);
		else{
			int x=search(v,arr[i]);
			v[x]=arr[i];
		}
	}
	cout<<v.size();

	/*
	int max=1;
	dp[0]=1;
	for(int i=1;i<n;i++){
		dp[i]=1;
		for(int j=i-1;j>=0;j--)
			if(dp[j]+1>dp[i] && arr[i]>arr[j]) dp[i]=dp[j]+1;
		if(dp[i]>max) max=dp[i];
	}
	cout<<max;
	*/
	return 0;
}
