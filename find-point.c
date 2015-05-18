//https://www.hackerrank.com/challenges/find-point
//mandeep singh @msdeep14
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		e=2*c-a;
		f=2*d-b;
		printf("%d %d\n",e,f);
	}
	return 0;
}
