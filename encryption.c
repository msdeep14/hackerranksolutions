//https://www.hackerrank.com/challenges/encryption
//mandeep singh @msdeep14
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int i,j,col,row,ur,lr,len,c=0,r=0;
	int ans ;
	char str[100];
	gets(str);
	//you need to remove spaces between the words of complete string;
	//if man was meant to stag on ground
	// is equivalent to ifmanwasmeanttostagonground
	len=strlen(str);
	lr=(int)sqrt(1.0*len);
	ur=(int)ceil(sqrt(1.0*len));
	for(row=lr;row<=ur;row++)
	{
		for(col=row;col<=ur;col++)
		{
			if(row*col>=len)
			{
				ans=row*col;
				r=row;
				c=col;
			}
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			if((j*c+i)<len)
			{
				printf("%c",str[j*c+i]);
			}
		}
					printf(" ");
	}
	return 0;
}
