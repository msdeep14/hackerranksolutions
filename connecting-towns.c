//https://www.hackerrank.com/challenges/connecting-towns
//mandeep singh @msdeep14
#include<stdio.h>
int main()
{
	long long int i,a,j,k,t,n;
	scanf("%lld",&t);
	while(t--)
	{
		j=1;
		scanf("%lld",&n);
		for(i=0;i<(n-1);i++)
		{	scanf("%lld",&a);
			j=(j*a)%1234567;
		}
		printf("%lld\n",j);
	}
	return 0;
}
