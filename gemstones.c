//gemstones
#include<stdio.h>
#include<string.h>
int searchchar(char [], char);
int main()
{
int len,n,i=0,j,count=0,flag=-1,check=-1,k;
char str[100][100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",str[i]);
}
len=strlen(str[0]);
for(i=0;i<len;i++)
{
for(j=1;j<n;j++)
{
flag=searchchar(str[j],str[0][i]);
if(flag==1) break;
}
if(flag==0)
{
check=0; flag=-1;
for(k=0;k!=i&&k<len;k++)
{
if(str[0][i]==str[0][k])
{
check=1;
break;
}
}
if(check==0)
{
count++;
}

}
else flag=-1;
}
printf("%d",count);
return 0;
}
int searchchar(char s[],char ch)
{
int len,i;
len=strlen(s);
for(i=0;i<len;i++)
{
if(ch==s[i])
return 0;
}
return 1;
}
