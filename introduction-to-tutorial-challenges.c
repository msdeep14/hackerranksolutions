//introduction-to-tutorial-challenges
#include<stdio.h>
int binarySearch(int a[], int s, int val)
{
    int x,y;
    int mid;
    
    x = 0; 
    y = s-1;
    
    while(x <= y)
    {
        mid = (x+y)/2;
        
        //compare
        if(val == a[mid])
        {//match found
            return mid;//position (index)
        }
        else if(val < a[mid])
        {
            y = mid-1;
        }
        else if(val > a[mid])
        {
            x = mid +1;
        }
    }
    
    return -1; //not found
}
int main()
{
int n,v,i,pos;
int arr[1010];
scanf("%d",&v);
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
//now search the element and print its index
 pos = binarySearch(arr, n, v);
    if(pos != -1)
        printf("%d",pos);
	return 0;
}
