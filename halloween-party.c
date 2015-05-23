//halloween-party
#include<stdio.h>  
 int main()  
 {  
   int t;  
   scanf("%d",&t);  
   while(t--){  
     unsigned long k,a,b;  
     scanf("%ld",&k);  
     a = k/2;  
     b = k-a;  
     printf("%ld\n",a*b);  
   }  
   return 0;  
 }  
