//bigger is greater
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int biggerisgreater(char arr[])
{ 
	int length,j,i;
	char temp;
	 length = strlen(arr); 
    if (length == 0)
    { 
		printf("no answer\n");
        return 0;
    }
	
     i = length - 1;
    while (i > 0 && arr[i - 1] >= arr[i])
    i--;
    if (i == 0)
    { 
		printf("no answer\n");
        return 0;
    } 
     j = length - 1;
    
    while (arr[j] <= arr[i - 1])
    j--;
    
     temp = arr[i - 1];
    arr[i - 1] = arr[j];
    arr[j] = temp; 
    j = length - 1;
    
    while (i < j) 
	{
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
    }
printf("%s\n",arr);
    return 1;
}
int main() 
{
long int t;
scanf("%ld",&t); 
char *str;
   str=(char*)malloc(t*sizeof(char)); 
for(int i=0;i<t;i++)
  { scanf("%s",str);
    biggerisgreater(str);
  }
return 0;
}
