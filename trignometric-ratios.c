//https://www.hackerrank.com/challenges/trignometric-ratios
//mandeep singh @msdeep14
#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	float  s,c,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f",&x);
		s=( x-(pow(x,3))/6 + (pow(x,5))/120 - (pow(x,7))/5040 + (pow(x,9))/362880);
		printf("%.3f\n",s);
		c=( 1 - (pow(x,2))/2 + (pow(x,4))/24 - (pow(x,6))/720 + (pow(x,8))/40320);
		printf("%.3f\n",c);
	}	
	return 0;
}
