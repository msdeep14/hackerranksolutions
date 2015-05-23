//https://www.hackerrank.com/challenges/handshake
//mandeep singh
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n,t,sum=0;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			sum=sum+i;
		}
		printf("%d\n",sum);
	}
	return 0;
	
}
