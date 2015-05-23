//fizzbuzz
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%3==0 && i%5==0)
			printf("\nFizzBuzz");
		else if(i%5==0)
			printf("\nBuzz");
		else if(i%3==0)
			printf("\nFizz");
		else
			printf("\n%d",i);
	}
	return 0;
}
