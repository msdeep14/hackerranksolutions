//https://www.hackerrank.com/challenges/time-conversion
//mandeep singh @msdeep14
#include <iostream>
#include<string.h>
using namespace std;


int main() {
  int i,rem,x;
  char str[10];
  cin>>str;

  if(str[8]=='P')
   {
       x=((str[0]-48)*10)+(str[1]-48);
    if(x!=12)
   {x=x+12;
    rem=(x%10)+48;
    str[1]=rem;
    x=(x/10)+48;
    str[0]=x;}}
    else
    {
       x=((str[0]-48)*10)+(str[1]-48);x=((str[0]-48)*10)+(str[1]-48);
       if(x==12)
        str[1]=48;
        str[0]=48;    }
    for(i=0;i<8;i++)
        cout<<str[i];


    return 0;


}
