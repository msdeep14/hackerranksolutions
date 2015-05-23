//sherlock-and-the-beast
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,a,b,n,flag=0,t,x,y;
int *arr;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
flag=0;
for(b=0;b<=n;b+=5)
{
for(a=0;a<=n;a+=3)
{
if(n==a+b && a%3==0 && b%5==0)
{
x=a;
y=b;
flag=1;
}
}
if(flag==1)
    break;
}
if(flag==0)
printf("-1");
else
{
for(i=0;i<x;i++)
arr[i]=5;
for(i=x;i<n;i++)
arr[i]=3;

for(i=0;i<n;i++)
	printf("%d",arr[i]);
}
printf("\n");
free(arr);
}
return 0;
}
