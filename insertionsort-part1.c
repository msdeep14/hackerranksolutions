//insertion sort part-1
#include<stdio.h>
int main()
{
	int i,j,pos,n,flag,k;
	int arr[1010];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int temp=arr[n-1];
	for(i=n-1;i>0;i--)
	{
		flag=0;
		if(temp<arr[i-1])
		{
			arr[i]=arr[i-1];
			pos=i;
			flag=1;
		}
		if(flag==0)
			break;
			if(i>0)
            {
		for(j=0;j<n;j++)
			printf("%d ",arr[j]);
		printf("\n");
            }
	}
	if(i>0)
    {
	arr[pos-1]=temp;
	for(k=0;k<n;k++)
		printf("%d ",arr[k]);
    }
    if(i==0)
    {
        arr[0]=temp;
        for(k=0;k<n;k++)
		printf("%d ",arr[k]);
    }
	return 0;

}
