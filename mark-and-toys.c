//mark-and-toys
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//lets try by doing with the help of functions
 void sort( long long int a[], long long  int s)
{
	 long long int current, t, x;
	for(t = 1; t< s; t++)
    {
        current = a[t];
        for(x = t-1; x>=0; x--)
        {
            if(current < a[x])
                a[x+1] = a[x];
            else
                break;
        }
        a[x+1] = current;
    }
}
int main() {
    long long int n, k, i, count=0,j,sum=0,temp;
    long long int arr[100002];
    scanf("%llu%llu", &n, &k);

    for(i=0; i<n; i++) 
	{
        scanf("%llu", &arr[i]);
    }
	
	sort(arr,n);
	
	
for(i=0;i<n;i++)
{
sum=sum+arr[i];
if(sum<=k)
{
count++;
}
else if(sum>k)
{
break;
}
}
printf("%llu",count);
    return 0;
}


