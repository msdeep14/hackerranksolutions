//https://www.hackerrank.com/contests/segfault/challenges/three-loops
#include<stdio.h>

int main()
{
   int n,sum;
   scanf("%d%d",&n,&sum);
   int ans=0,a,b,c;
   for(a=1;a<=n;a++)
   {
      for(b=1;b<=n;b++)
      {
         for(c=1;c<=n;c++)
         {
            if(a+b+c==sum){
               ans++;
            }
         }
         
      }
      
   }
   printf("%d\n",ans);
   return 0;
   
}
