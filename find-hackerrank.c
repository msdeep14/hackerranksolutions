//https://www.hackerrank.com/challenges/find-hackerrank
//mandeep singh @msdeep14
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,t,n,flag1,flag2;
	char str[5000];
	char str1[10]={'h','a','c','k','e','r','r','a','n','k'};
	scanf("%d",&t);
	gets(str);
	while(t--)
	{
		flag1=0;
		flag2=0;
		gets(str);
		n=strlen(str);
		for(i=0;i<10;i++)
		{
			if(str[i]==str1[i])
			{
				//do nothing;
			}
			else 
			{
				flag1=1;
				break;
			}
		}
		for(i=n-1,j=9;i>=(n-10),j>=0;i--,j--)
		{
			if(str[i]==str1[j])
			{
				//do nothing;
			}
			else 
			{
				flag2=1;
				break;
			}
			
		}
		if(flag1==0 && flag2==0)
			printf("0\n");
		else if(flag1==0 && flag2==1)
			printf("1\n");
		else if(flag1==1 && flag2==0)
			printf("2\n");
		else 
			printf("-1\n");
		
		
	}
	return 0;
}
