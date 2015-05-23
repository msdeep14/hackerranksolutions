//chocolate-feast
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0; 
        answer=n/c;  
     if(answer>=m)  
     {  
       int temp=answer;  
       do{  
         temp-=m;  
         answer++;
           temp++;  
       }while(temp>=m);  
     }  
        
        printf("%d\n",answer);
    }
    return 0;
}
