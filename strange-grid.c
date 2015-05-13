//https://www.hackerrank.com/challenges/strange-grid
//mandeep singh @msdeep14
#include<stdio.h>
int main()
{
	long long int a,b,op;
	scanf("%lld%lld",&a,&b);
	if(a%2!=0)
	{
		op=(a/2)*10 + 2*(b-1);
	}
	else if(a%2==0)
	{
		op=(((a-1)/2)*10) + 1 + 2*(b-1);
	}
	printf("%lld",op);
}
