//priyanka-and-toys
//mandeep singh
#include<stdio.h>
#include<stdlib.h>
void insertion(int a[], int s)
{
    int i, j;
    int current;

    for(i = 1; i< s; i++)
    {
        current = a[i];
        for(j = i-1; j>=0; j--)
        {
            if(current < a[j])
                a[j+1] = a[j];
            else
                break;
        }
        a[j+1] = current;
    }
}

int main()
{
int i,j,k,w,flag=0,n,unit,x;
int arr[100000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
//sort the array;
insertion(arr,n);
//arr sorted now
i=0;
unit=0;
while(i<n)
{
flag=0;
w=arr[i];
unit++;
x=i;
for(j=x+1;j<=n;j++)
{
flag=0;
if(arr[j]<=(w+4) && arr[j]>=w)
{
i++;
flag=1;
}
if(flag==0)
break;

}
if(flag==0)
{
i++;
}

}

printf("%d",unit);
return 0;
}
