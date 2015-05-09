//palindrome-index
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,k,t,n,flag;
char str[100010];
scanf("%d",&t);
while(t--)
{
flag=0;
scanf("%s",str);
n=strlen(str);
i=0;
j=n-1;
while(i<j)
{
if(str[i]!=str[j])
{
if(str[i]==str[j-1] && str[i+1]!=str[j])
{
printf("%d\n",j);
flag=1;
break;
}
   else if(str[i]==str[j-1] && str[i+1]==str[j-2])
{
printf("%d\n",j);
flag=1;
break;
} 
else if(str[i]==str[j-1] && str[i+1]==str[j])
{
printf("%d\n",i);
flag=1;
break;
}
    else
        {
        printf("%d\n",i);
flag=1;
break;
    }
}
i++;
j--;
}
if(flag==0)
printf("-1\n");

}
return 0;
}
