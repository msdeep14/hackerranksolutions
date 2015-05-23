//angry professor
#include<stdio.h>
int main()
{
	int i,j,t,n,k,a,count=0;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a<=0)
			{
				count++;
			}
		}
		if(count<k)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
