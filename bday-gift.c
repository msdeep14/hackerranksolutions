//https://www.hackerrank.com/challenges/bday-gift
//mandeep singh @msdeep14
#include<stdio.h>
int main()
{
		int i,j,k,n,sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&k);
			sum=sum+k;
		}
		printf("%.1f",(sum/2.0));
		return 0;
}
