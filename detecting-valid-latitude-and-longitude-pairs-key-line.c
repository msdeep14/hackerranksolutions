//https://www.hackerrank.com/contests/magic-lines-may-2015/challenges/detecting-valid-latitude-and-longitude-pairs-key-line
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

 char x[100],y[100];
    int t,i,flag;
   scanf("%d",&t);
    while(t)
        {
        flag=1;
    //****FILL THE MISSING LINE HERE****
    scanf("%s",x);
    scanf("%s",y);

    int xlen=strlen(x);
    int ylen=strlen(y);
         
    if(x[1] == ' ' || y[0] == ' ' || x[xlen-2]== '.' || y[ylen-2]=='.' || y[ylen-2]==' ' || x[0]!= '(' || y[ylen-1]!= ')' || x[xlen-1]!= ',')
       flag=0;
     else if(x[1] == '+' || x[1] == '-')
               if(x[2]=='0' && x[3]!='.')
                flag=0;
    else if(y[0] == '+' || y[0] == '-')
               if(y[1]=='0' && y[2]!='.')
                flag=0;
         
    if(flag){    
        for(i=0;i<xlen-1;i++)
            x[i]=x[i+1];
         
       float x1 = atof(x);
       float y1 = atof(y);
   
       if(x1>90 || x1<-90)
        printf("Invalid\n");
       else if(y1>180 || y1<-180)
        printf("Invalid\n");
       else
        printf("Valid\n");
    }
    else
        printf("Invalid\n");
 
        t--;
    }
    return 0;
}
