//https://www.hackerrank.com/challenges/game-of-thrones
//mandeep singh @msdeep14
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,even=0,odd=0,n,flag=0;
	char str[100000];
	char abcstr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int abccount[26];
	for(i=0;i<26;i++)
	{
		abccount[i]=0;
	}
	cin>>str;
	n=strlen(str);
	k=0;
	for(i=0;i<n;i++)
	{
		for(k=0;k<26;k++)
		{
			if(str[i]==abcstr[k])
			{
				abccount[k]++;
			}
		}
	}
	int flag1=0;
	//now check no of abccounts;
	for(i=0;i<26;i++)
	{
		if(abccount[i]%2==0)
		{
			//do nothing;
		}
		else 
		{	
			odd++;
	        flag1=1;
		}
	}
	if(odd==1 && n%2!=0)
		{
			flag=1;
		}
	if(flag==1)
		cout<<"YES";
	else if(odd==0)
		cout<<"YES";
	else 
		cout<<"NO";
	return 0;
}
