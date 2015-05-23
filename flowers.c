//https://www.hackerrank.com/challenges/flowers
//mandeep singh
//https://www.hackerrank.com/challenges/flowers
//mandeep singh
#include<stdio.h>
#include<stdlib.h>
void insertion( long long int  a[],  long long int s)
{
     long long int  i, j;
    long long int  current;

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
	 long long int i,j,m,k,n,cost=0;
	 long long  int arr[100000];
	scanf("%lld%lld",&n,&k);

	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	//sort the arr;
	insertion(arr,n);
	m=1;
	cost=0;
	for(i=0;i<n;i++)
	{
		cost=cost + arr[n-i-1]*m;
		if(i%k==k-1)
        {
            m++;
        }
	}
	printf("%lld",cost);
	return 0;
}
