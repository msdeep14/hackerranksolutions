//sherlock-and-squares
#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a, b;//a=min ,b=max 
		scanf("%d%d",&a,&b);
		int count = 0, i=1;
		int square = pow(i, 2);
		while(square <= b)
        {
			if(square >= a)
            {
                count++;
			} 
			i++;
			square = pow(i,2);
		}
		printf("%d\n",count);
	}
	return 0;
}
