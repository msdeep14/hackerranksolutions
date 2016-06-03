//hackerrank lisa's workbook
#include<iostream>
using namespace std;
int main(){
	int n,k;
	int t[105];
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>t[i];
	int prev=0,temp=0,j=0,page=1;
	int sp=0;
	for(int i=0;i<n;i++){
		temp=t[i];
		j=0;
		prev=0;
		while(j<t[i]){
			if(temp<=k){
				j+=temp;
				if(page>prev && page<=j) sp++;
			}
			else if(temp>k){
				j+=k;
				if(page>prev && page<=j) sp++;
				prev+=k;
				temp-=k;
			}
			page++;
		}
	}
	cout<<sp;
	return 0;
}
