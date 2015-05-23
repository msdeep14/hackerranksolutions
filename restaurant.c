//restaurant
#include<stdio.h>
int main()
{
	int i,c,t,max,sq,a,l,b,min;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&l,&b);
		if(l<b)
			min=l;
		else
			min=b;
		for(i=1;i<=min;i++)
		{
			if(l%i==0 && b%i==0)
				max=i;
		}
		a=l/max;
		c=b/max;
		printf("%d\n",(a*c));
	}
	return 0;
}
