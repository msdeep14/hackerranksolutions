//https://www.hackerrank.com/challenges/find-median
//mandeep singh @msdeep14
#include<stdio.h>
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
	int i,j,n,k;
	int arr[1000000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion(arr,n);
	printf("%d",arr[n/2]);
	return 0;
}
