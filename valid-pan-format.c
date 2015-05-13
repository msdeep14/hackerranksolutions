//https://www.hackerrank.com/challenges/valid-pan-format
//mandeep singh @msdeep14
#include<stdio.h>
int main()
{
	int i,j,k,t,flag1,flag2,flag3;
	char str[10];
	scanf("%d",&t);
	while(t--)
	{
		flag1=0;
		flag2=0;
		scanf("%s",str);
		for(i=0;i<5;i++)
		{
			
			if(str[i]<=90 && str[i]>=65)
			{
				//do nothing;
			}
			else 
			{
				flag1=1;
			}
		}
		for(i=5;i<9;i++)
		{
			if(str[i]>=48 && str[i]<=57)
			{
				//do nothing;
			}
			else 
			{
				flag2=1;
			}
			
		}
		flag3=0;
		if(str[9]>=65 && str[9]<=90)
		{
			//do nothing;
		}
		else
			flag3=1;
		
		if(flag1==0 && flag2==0 && flag3==0)
		printf("YES\n");
	else
		printf("NO\n");
	}
}
