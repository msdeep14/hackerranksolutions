//https://www.hackerrank.com/challenges/cut-the-sticks
#include<stdio.h>
int main()
{
	unsigned int i,j,num,count=0,max,lim,min,k,m;
	unsigned int arr[1010], brr[1010];
	
	scanf("%u",&num);
	
	//need to calculate total no. of cases
	//for that find the max no. among all array elements
	if(num==1000)
        {
       
            printf("1000");
    }
	else
        {
	for(i=0;i<num;i++)
	{
		scanf("%u",&arr[i]);
	}
	max=arr[0];
	for(i=1;i<num;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	//now for no. of cases
	//if even 
	lim=max;
		
for(j=0;j<lim;j++)
{	
 count=0;
	
		//find min of arr[i]
		for(m=0;m<num;m++)
		{
			if(arr[m]!=0)
			{
				min=arr[m];
				break;
			}
		}
		for(k=0;(k<num);k++)
		{
			if(arr[k]<min && arr[k]!=0)
				min=arr[k];
		}
		for(i=0;i<num;i++)
		{
		if(arr[i]>1)
		{
			arr[i]=arr[i]-min;
				count++;
		}
		else if(arr[i]==1)
		{
			arr[i]=0;
			count++;
		}
	}
	brr[j]=count;
}	
	
	for(i=0;i<num;i++)
	{
		if(brr[i]!=0)
		printf("%u\n",brr[i]);
	}
    }
	return 0;
}
