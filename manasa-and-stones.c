//manasa-and-stones
#include<stdio.h>
int main()
 {  
   
   int t;  
   scanf("%d",&t);  
   while(t--)
   {  
     int n,a,b,gt,lw;  
     scanf("%d%d%d",&n,&a,&b); 
     if(a>b)
	 {  
       gt =a ;  
       lw = b;  
     }
	 else
	 {  
       lw = a;  
       gt = b;  
     }  
     int ans = lw*(n-1);  
     n--;  
     int s = gt-lw;  
     printf("%d ",ans);  
     if(s>0)
	 {  
       while(n--)
	   {  
         ans =ans + s;  
         printf("%d ",ans);  
       }  
     }  
     printf("\n");  
   }  
   return 0;  
 }  
