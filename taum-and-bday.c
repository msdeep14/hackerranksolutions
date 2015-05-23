//taum-and-b'day
//mandeep singh
#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned long long  i,j,x,y,z,cost,costb,costw,b,w,t;
	scanf("%llu",&t);
	while(t--)
	{
		scanf("%llu%llu%llu%llu%llu",&b,&w,&x,&y,&z);
		costb=b*x;
		costw=w*y;
		cost=costb+ costw;
		if(x==y)
			printf("%llu\n",cost);
		else if(x<y)
		{
			if((x+z)<y)
				printf("%llu\n",((w*x)+(w*z))+costb);
			else
				printf("%llu\n",cost);
		}
		else
		{
			if((y+z)<x)
				printf("%llu\n",((b*y)+(b*z))+costw);
			else
				printf("%llu\n",cost);
		}
	}
	return 0;
}
