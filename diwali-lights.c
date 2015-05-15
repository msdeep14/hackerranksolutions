//https://www.hackerrank.com/challenges/diwali-lights
//mandeep singh @msdeep14
#include<stdio.h>
int power(int k)
{
	int i,j,ans=1;
	for(i=1;i<=k;i++)
	{
		ans=(ans*2)%100000;
	}
	return ans;
}
int main()
{
	int i,j,t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",power(n)-1);
	}
	return 0;
}
