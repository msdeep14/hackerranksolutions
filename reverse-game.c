//reverse-game
#include<stdio.h>
int main()
{
int i,j,k,m,n,l,t;
int arr[100000];
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&k);
arr[0]=n-1;
j=n;
l=2;
for(i=1;i<n;i++)
{
if(i%2!=0)
{
arr[i]=n-j;
j--;
}
else
{
arr[i]=n-l;
l++;
}
}
//now check for element k in the whole arr, apply sequential search;
for(i=0;i<n;i++)
{
if(arr[i]==k)
{
printf("%d\n",i);
break;
}
}
}
return 0;
}

