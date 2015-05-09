//max-min
#include<stdio.h>
#include<stdlib.h>
void insertion(long long int a[], long long int s)
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
	long long int i,j,k,n,m=0,size,min;
	long long int arr[100000],brr[100000];
	scanf("%lld",&n);
	scanf("%lld",&k);
	for(i=0;i<n;i++)
	scanf("%lld",&arr[i]);
//sort the arr;
insertion(arr,n);
//now arr is sorted;
for(i=0,j=k-1;j<n;i++,j++)
{
	brr[m]=arr[j]-arr[i];
	m++;
	size=m;
}
//now calculate min of brr;
min=brr[0];
for(i=0;i<size;i++)
{
	if(min>brr[i])
		min=brr[i];
}
printf("%lld",min);
return 0;
}
