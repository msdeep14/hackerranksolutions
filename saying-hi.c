//https://www.hackerrank.com/challenges/saying-hi
//mandeep singh @msdeep14
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,t,n;
	char str[1000];
	scanf("%d",&t);
	gets(str);
	while(t--)
	{
		int flag1=0,flag2=0,flag3=0,flag4=0;
		gets(str);
		if(str[0]=='h' || str[0]=='H')
			flag1=1;
		if(str[1]=='i' || str[1]=='I')
			flag2=1;
		if(str[2]==' ' || str[2]==' ')
			flag3=1;
		if(str[3]!='d' || str[3]=='D')
			flag4=1;
		if(flag1==1 && flag2==1 && flag3==1 && flag4==1)
			puts(str);
		
	}
	return 0;
}
