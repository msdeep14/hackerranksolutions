//https://www.hackerrank.com/challenges/string-reduction
//mandeep singh @msdeep14
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int numa,numb,numc,i,j,t,len,ans;
	char str[101];
	cin>>t;
	while(t--)
	{
		numa=0;
		numb=0;
		numc=0;
		cin>>str;
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			if(str[i]=='a')
				numa++;
			else if(str[i]=='b')
				numb++;
			else 
				numc++;
		}
		if((numa==0 && numb==0) || (numb==0 && numc==0) || (numc==0 && numa==0))
			ans=len;
		else if((numa%2==0 && numb%2==0 && numc%2==0) || (numa%2!=0 && numb%2!=0 && numc%2!=0))
			ans=2;
		else
			ans=1;
		cout<<ans<<endl;
	}
	return 0;
}

