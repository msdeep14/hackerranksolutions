//the-maximum-subarray
//mandeep singh
#include<stdio.h>
#include<stdlib.h>
int maxsubarray(int a[],int s)
{
	int maxsofar=0,i,maxending=0;

for(i=0;i<s;i++)
{
	maxending=maxending + a[i];
if(maxending<0)
{
	maxending=0;
}
 if(maxsofar<maxending)
{
	maxsofar=maxending;
}
}

return maxsofar;

}
int main()
{
	int i,j,k,n,t,sum,sum1,count=0,max;
	int arr[100000];
	scanf("%d",&t);
	while(t--)
	{
        count=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
        for(i=0;i<n;i++)
            {
            if(arr[i]<0)
                count++;
        }
        
		if(count<n)
            {
		sum1=maxsubarray(arr,n);
		printf("%d ",sum1);
		sum=0;
		for(i=0;i<n;i++)
		{
			if(arr[i]>0)
				sum=sum + arr[i];
		}
		printf("%d",sum);
		
		printf("\n");
        }
        else if(count==n)
            {
            max=arr[0];
            for(i=0;i<n;i++)
                {
                if(max<arr[i])
                    max=arr[i];
            }
            printf("%d %d\n",max,max);
        }
	}
	return 0;
}
