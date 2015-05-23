//running time of algorithms
//insertion sort part2
#include<stdio.h>
int main()
{
	int i,j,current,s,k,m=0;
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
			{ arr[j+1] = arr[j];
				m++;
			}
            else
                break;//stop the loop
        }
        arr[j+1] = current;//insertion
		
    }
	printf("%d",m);
	return 0;
}
