//https://www.hackerrank.com/challenges/utopian-tree
#include<stdio.h>
int main()
{
	int i,j,n,h,k,m,t,p;
	int test[15],val[500];
	scanf("%d",&t);
	for(m=0;m<t;m++)
		scanf("%d",&test[m]);
	
	for(k=0;k<t;k++)
	{
		
	if(test[k]==0)
		h=1;
	else
	{
		h=1;
		for(j=1;j<=test[k];j++)
		{
			if(j%2!=0)
				h =2*h;
			else if(j%2==0)
				h=h+1;
		}	
	}
	
	val[k]=h;
			
	}
	for(p=0;p<t;p++)
		printf("%d\n",val[p]);
	

	return 0;
}
