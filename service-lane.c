//https://www.hackerrank.com/challenges/service-lane
#include<stdio.h>
int main()
{
	int a,b,n,i,j,k,l,min,t;
	int arr[100005];
	
	
	scanf("%d%d",&n,&t);
	
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<t;i++)
	{
		
		scanf("%d%d",&a,&b);
		min=arr[a];
		for(l=a;l<=b;l++)
		{
			if(arr[l]<min)
				min=arr[l];
			
		}
		printf("%d\n",min);
	}
	return 0;
}
