//https://www.hackerrank.com/challenges/sherlock-and-minimax
//mandeep singh @msdeep14
#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;

int main()
{
	int n,m,p,q;
	int a[100];
	vector <int> v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>p>>q;
	sort(a,a+n);
	for(int i=0;i<(n-1);i++)
	{
		if((a[i]+a[i+1])%2==0)
			v.push_back((a[i]+a[i+1])/2);
		else
		{
			v.push_back((a[i]+a[i+1])/2);
			v.push_back((a[i]+a[i+1])/2 + 1);
		}
	}
	v.push_back(p);
	v.push_back(q);
	sort(v.begin(),v.end());
	
	int da=-1;
	int ans=0;
	for (int i=0;i<v.size();i++) {
		if (v[i] >= p && v[i] <= q) {
		int mini=INT_MAX;
		for (int j=0;j<n;j++)
		{
			mini = min(mini, abs(v[i]-a[j]));
		}
	
		if (mini > da) {
			da=mini;
			ans=v[i];
		}
	}
}
	cout<<ans;
	
	
	return 0;
}
