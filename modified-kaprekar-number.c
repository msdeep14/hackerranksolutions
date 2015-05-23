//kaprekar numbers
/*
i/p 1
10000

o/p 1 9 45 55 99 297 703 999 2223 2728 4950 5050 7272 7777 9999
*/
#include<stdio.h>
#include<stdlib.h>
void karpekarnumber(int p, int q, char *arr)
{
	long int i, num,j,k,m,d,sq,rem,flag=0,temp;
	for(i=p;i<=q;i++)
	{
		sq=i*i;
		d=0;
		temp=i;
		while(temp>0)
		{
			temp=temp/10;
			d++;
		}
		m=d-1;
		k=0;
		while(sq>0 && k<d)
		{
			rem=sq%10;
			sq=sq/10;
			arr[m]=rem;
			m--;
			k++;
		}
		
			num=0;
		for(j=0;j<d;j++)
		{
			num=num*10 + arr[j];
		}
		
		if((sq+num)==i)
		{
			printf("%ld ",i);
			flag=1;
		}
	}
	if(flag==0)
		printf("INVALID RANGE");
}
int main()
{
	long  int x,y;
	char *brr;
	scanf("%ld%ld",&x,&y);
	brr=(char*)malloc((y-x+2)*sizeof(char));
	karpekarnumber(x,y,brr);
	
	return 0;
}
