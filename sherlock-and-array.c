//https://www.hackerrank.com/challenges/sherlock-and-array
//mandeep singh @msdeep14
#include<stdio.h>
int main()
{
	int i,j,t,n,sum=0,sum1=0,sum2=0,flag=0;
	int arr[100000];
	scanf("%d",&t);
	while(t--)
	{
		flag=0;
		sum=0;
		sum1=0;
		sum2=0;
		scanf("%d",&n);
        for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			sum=sum+arr[i];
		}
		if(n==1)
		{
			printf("YES\n");
            flag=1;
		}
        else if(n==2)
            {
            printf("NO\n");
            flag=1;
        }
		else 
		{
            flag=0;
		
		sum1=arr[0];
		sum2=sum-arr[1]-arr[0];
		for(i=1;i<n-1;i++)
		{
			if(sum1==sum2)
			{
				printf("YES\n");
				flag=1;
				break;
			}
			else 
			{
				sum1=sum1+arr[i];
				sum2=sum2-arr[i+1];
			}
		}
		if(flag==0)
			printf("NO\n");
		}
	}
	return 0;
}
