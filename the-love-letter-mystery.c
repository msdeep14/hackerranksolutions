//the love letter mystery
#include<stdio.h>
#include<string.h>
int main()
{
	 int i, n, len, count, j,t;
    char str[10000];
	scanf("%d",&t);
    while(t--)
	{
		scanf("%s",str);
        len = strlen(str);
        i = 0;
        j = len - 1;
        count = 0;
        while ( i < j) 
		{
               if ( str[i] != str[j] )
				   {
                   if ( str[j] > str[i] ) 
                       count = count + (str[j] -str[i]);
                   else 
                       count = count + (str[i] -str[j]); 
					}
               i++;
               j--;    
        }
        printf("%d\n",count);
    }

}
