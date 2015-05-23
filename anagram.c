//anagram
//mandeep singh
#include<stdio.h>
#include<string.h>
int main()
{
int i,t,j,k,n,flag=0,n1,n2,count=0;
char str[10000],str1[10000],str2[10000];
scanf("%d",&t);
while(t--)
{
count=0;
flag=0;
scanf("%s",str);
fflush(stdin);
n=strlen(str);
if(n%2!=0)
{
printf("-1\n");
}
else
{
j=0;
for(i=0;i<(n/2);i++)
{
str1[j]=str[i];
j++;
}
n1=strlen(str1);
j=0;
for(i=(n/2);i<n;i++)
{
str2[j]=str[i];
j++;
}
n2=strlen(str2);

//check for elements now
for(i=0;i<n1;i++)
{
	for(j=0;j<n2;j++)
	{
		if(str1[i]==str2[j])
		{
			str2[j]=0;
			break;
		}
	}
}
for(i=0;i<n2;i++)
{
	if(str2[i]!=0)
	{
		count++;
	}
}
printf("%d\n",count);
for(i=0;i<n1;i++)
{
	str1[i]=0;
	str2[i]=0;
}
}
}
return 0;
}
