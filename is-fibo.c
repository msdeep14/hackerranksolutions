//Is-Fibo
#include<stdio.h>
int main()
{
	long int i,j,num,flag,f,m,k,l,z;
	int t;
	long int arr[100000];
	//store fibonnacci series in arr
	scanf("%d",&t);
	f=0;
	m=1;
	k=1;
	l=0;
	arr[0]=0;
	for(i=0;i<=10000;i++)
	{
		f=k+l;
		k=l;
		l=f;
	    arr[m]=f;
		m++;
	}
	for(z=0;z<t;z++)
	{
		scanf("%ld",&num);
		flag=0;
		for(l=0;l<=10000;l++)
		{
			if(num==arr[l])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("IsFibo\n");
		else if(flag==0)
			printf("IsNotFibo\n");
	}
	return 0;
}
