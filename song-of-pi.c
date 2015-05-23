//song-of-pi
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j=0,n,t,m=0,k=0,totalelements,flag=0,l;
	char str[1000];
	int pi[29] = {3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,3};
    int brr[1000];
	//can i have a large container of coffee right now
	scanf("%d",&t);
	fflush(stdin);
	gets(str);
	fflush(stdin);
	while(t--)
	{
		m=0;
		flag=0;
		gets(str);
		fflush(stdin);
		n=strlen(str);
		l=0;
	    for(i=0;i<n;i++)
		{
			    if(str[i]!=' ')
				{
					l++;
				}
				else
				{
					brr[m]=l;
					m++;
					l=0;
				}
		 }
		 brr[m]=l;
		totalelements=m+1;
	//now check the elements of brr to elements of pi;
	for(k=0;k<totalelements;k++)
	{
		if(brr[k]!=pi[k])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("It's a pi song.\n");

	if(flag==1)
		printf("It's not a pi song.\n");
	}

	return 0;
}

