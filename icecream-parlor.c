//icecream-parlor
//mandeep singh
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,flag=0,n,m,x,y,t;
	int arr[100000];
	arr[0]=0;
	scanf("%d",&t);
	while(t--)
	{
		flag=0;
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(arr[i]+arr[j]==m)
			{
				x=i;
				y=j;
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	printf("%d %d",x,y);
        printf("\n");
	}
	return 0;
}
