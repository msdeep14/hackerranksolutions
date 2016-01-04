//https://www.hackerrank.com/contests/segfault/challenges/stack-overflow-revisited
#include<stdio.h>

#define max_n 5000000
int mod=100000;
int memo[max_n+5];

int fib(int n)
{
      if(n==1)return 0;
      if(n==2) return 1;
      if(memo[n]>0)return memo[n];
      memo[n]=(fib(n-1) + fib(n-2))%mod;
      return memo[n];
}
int main()
{
      int n,i;
      for(i=1;i<=5000000;i++)
      {
         fib(i);
      }
      
      scanf("%d",&n);
      printf("%d\n",memo[n]);
      return 0;
   
}
