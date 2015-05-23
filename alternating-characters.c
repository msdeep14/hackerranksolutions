//alternating characters
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,n,count=0,flag=0,t;
char str[100000];
scanf("%d",&t);
while(t--)
{
count=0;
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(str[i]==str[i+1])
{
str[i]=0;
count++;
}
}
printf("%d\n",count);
}
return 0;
}
