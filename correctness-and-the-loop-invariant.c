//correctness-and-the-loop-invariant
#include<stdio.h>
int main()
{
	int i,j,current,s,k;
	int arr[1010];
	scanf("%d",&s);
	for(i=0;i<s;i++)
		scanf("%d",&arr[i]);
	for(i = 1; i< s; i++)
    {
        current = arr[i];//current value
        for(j = i-1; j>=0; j--)
        {
            if(current < arr[j])
                arr[j+1] = arr[j];
            else
                break;//stop the loop
        }
        arr[j+1] = current;//insertion
		
    }
    for(k=0;k<s;k++)
			printf("%d ",arr[k]);
	return 0;
}
