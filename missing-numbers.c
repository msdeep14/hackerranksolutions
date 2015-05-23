//missing-numbers
//mandeep singh

#include<stdio.h>
#include<stdlib.h>
#define SIZE 10001
int main()
{
    int a[SIZE];
    int i,n,m;
    for( i = 0; i<SIZE;i++)
	{
        a[i]=0;
    }
    int N, M;
    scanf("%d", &N);
    int temp;
    for( n=0; n<N; n++)
	{
        scanf("%d", &temp);
        a[temp]+=1;
    }
    scanf("%d", &M);
    for( m =0; m<M; m++)
	{
        scanf("%d", &temp);
        a[temp]-=1;
    }
    for( i =0; i<SIZE; i++)
	{
        if(a[i]<0)
			printf("%d ", i);
    }
    return 0;
}
