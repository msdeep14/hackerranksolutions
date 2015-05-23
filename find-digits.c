//find digits
#include<stdio.h>
int main()
{
	int i,j,t,num,count=0,temp,rem=0;
	int arr[20],brr[20];
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("\n%d",&arr[i]);
	for(i=0;i<t;i++)
	{   count=0;
		
		temp=arr[i];
		while(temp>0)
		{
	rem=temp%10;
	if(rem!=0)
	{
	if(arr[i]%rem==0)
		count++;
	}
	temp=temp/10;
		}
		brr[i]=count;
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",brr[i]);
	}	
		
		return 0;
}
