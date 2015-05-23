//filling-jars
#include<stdio.h>
int main()
{
	int n,m;
	long long int count=0;
	scanf("%d%d",&n,&m);
	while(m--)
	{
		long long int a,b,k;
		scanf("%lld%lld%lld",&a,&b,&k);
		count=count+(b-a+1)*k;
	}
	printf("%lld",(count/n));
	return 0;
}
