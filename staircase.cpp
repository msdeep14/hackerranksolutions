//staircase
//mandeep singh @msdeep14
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	for(i=1,j=n-1;i<=n,j>=0;i++,j--)
	{
		for(k=0;k<j;k++)
			cout<<" ";
		for(l=0;l<i;l++)
			cout<<"#";
		cout<<endl;
	}
	return 0;
}
