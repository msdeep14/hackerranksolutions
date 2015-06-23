//https://www.hackerrank.com/challenges/flipping-bits
//mandeep singh @msdeep14
#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,t,num,n,rem,sum=0,power=1;
	long long int arr[32],brr[32];
	scanf("%lld",&t);
	while(t--)
	{
		sum=0;
		power=1;
		scanf("%lld",&num);
		j=31;
		int pos=0;
		while(num>=1)
		{
			rem=num%2;
			arr[j]=rem;
			j--;
			num=num/2;
			pos++;
		}
		for(i=0;i<(32-pos);i++)
		{
			arr[i]=0;
		}
		for(i=0;i<32;i++)
		{
			if(arr[i]==0)
				arr[i]=1;
			else if(arr[i]==1)
				arr[i]=0;
		}
		for(i=31;i>=0;i--)
		{
			sum=sum+arr[i]*power;
			power=power*2;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
