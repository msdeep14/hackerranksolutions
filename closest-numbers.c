//https://www.hackerrank.com/challenges/closest-numbers
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
	int i,j,n,flag=0,min;
	int arr[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	insertion(arr,n);
	min=arr[1]-arr[0];
	for(i=1;i<(n-1);i++)
	{
		if(min>arr[i+1]-arr[i])
		{
			min=arr[i+1]-arr[i];
		}
	}
	//we got the min difference now in the whole arr;
	for(i=0;i<(n-1);i++)
	{
		if(min==arr[i+1]-arr[i])
		{
			printf("%d %d ",arr[i],arr[i+1]);
		}
	}
	return 0;
}
