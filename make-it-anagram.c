//make it a anagram
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,count=0,n1,n2,flag=0;
	char str1[10000],str2[10000];
	scanf("%s",str1);
	scanf("%s",str2);
	n1=strlen(str1);
	n2=strlen(str2); 
	for(i=0;i<n1;i++)
	{
		flag=0;
	    if(str1[i]==0)
            {
                //do nothing
            }
        else
        {
		for(j=0;j<n2;j++)
		{
			flag=0;
		    if(str2[j]==0)
                {
                    //do nothing
                }
            else
            {
			if(str1[i]==str2[j])
			{
				str1[i]=0;
				str2[j]=0;
				flag=1;
				break;
			}
            }
		}
		if(flag==0)
        {
            count++;
        }
        }
	}
	for(i=0;i<n2;i++)
	{
		flag=0;
	    if(str2[i]==0)
        {
            //do nothing
        }
        else
        {
		for(j=0;j<n1;j++)
		{
			flag=0;
		    if(str1[j]==0)
            {
                //do nothing
            }
            else
            {
			if(str2[i]==str1[j])
			{
				str2[i]=0;
				str1[j]=0;
				flag=1;
				break;
			}
            }
		}
		if(flag==0)
        {
            count++;
        }
        }
	}
	printf("%d",count);
	return 0;
}
