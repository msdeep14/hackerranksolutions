//hackerrank lary's array
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,t;
	int arr[1005];
	cin>>t;
	while(t--){
		cin>>n;
		int flag=0;
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=0;i<n-2;i++){
			for(int j=n-3;j>=i;j--){
				int a=arr[j];
				int b=arr[j+1];
				int c=arr[j+2];
				if(c<b && c<a){
					arr[j]=c;
					arr[j+1]=a;
					arr[j+2]=b;
				}
				else if(b<a && b<c){
					arr[j]=b;
					arr[j+1]=c;
					arr[j+2]=a;
				}
			}
		}
		(arr[n-2]<arr[n-1])?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
