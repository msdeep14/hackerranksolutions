//https://www.hackerrank.com/challenges/sherlock-and-planes
//mandeep singh @msdeep14
#include<stdio.h>
int main()
{
	int i,j,k,t,n,det;
	int a[12],b[3],c[3],d[3];
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<12;i++)
			scanf("%d",&a[i]);
		b[0]=a[3]-a[0];
		b[1]=a[4]-a[1];
		b[2]=a[5]-a[2];
		c[0]=a[6]-a[0];
		c[1]=a[7]-a[1];
		c[2]=a[8]-a[2];
		d[0]=a[9]-a[0];
		d[1]=a[10]-a[1];
		d[2]=a[11]-a[2];
		det=b[0]*(c[1]*d[2]-d[1]*c[2]) - c[0]*(b[1]*d[2]-d[1]*b[2]) + d[0]*(b[1]*c[2]-c[1]*b[2]);
		if(det==0)
			printf("YES\n");
		else
			printf("NO\n");
		
	}
}
