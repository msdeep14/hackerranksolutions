//maximizing-xor
#include <stdio.h>  
 #include <string.h>  
 #include <math.h>  
 #include <stdlib.h>  
 #include <assert.h>  

 int maxXor(int l, int r) {  
   int ans = 0 ,i,j,temp=0;  
   for(i=l;i<=r;i++)
   {  
     for(j=i;j<=r;j++)
     {  
       temp = (i ^j);  
     if(ans<temp)  
       ans=temp;  
     }  
   }  
   return ans;  
 }  
 int main() {  
   int res;  
   int _l;  
   scanf("%d", &_l);  
   int _r;  
   scanf("%d", &_r);  
   res = maxXor(_l, _r);  
   printf("%d\n", res);  
   return 0;  
 }  
