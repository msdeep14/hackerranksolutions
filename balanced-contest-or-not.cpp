//https://www.hackerrank.com/contests/101hack27/challenges/balanced-contest-or-not
//mandeep singh @msdeep14
#include<iostream>
using namespace std;
void insertion(int a[], int s)
{
    int i, j;
    int current;
    
    for(i = 1; i< s; i++)
    {
        current = a[i];
        for(j = i-1; j>=0; j--)
        {
            if(current < a[j])
                a[j+1] = a[j];
            else
                break;
        }
        a[j+1] = current; 
    }
}
int main()
{
	int i,j,n,k,l,val1[5],val2[5],flag;
	int b[5],d[5],b1[5],d1[5];
	for(i=0;i<5;i++)
	{
		cin>>b[i];
		cin>>d[i];
	}
	for(i=0;i<5;i++)
	{
		b1[i]=b[i];
		d1[i]=d[i];
	}
	insertion(b1,5);
	insertion(d1,5);
	//check values
	k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(b1[i]==b[j])
		{
			val1[k]=j;
			k++;
			break;
		}
		}
	}
	k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(d1[i]==d[j])
			{
				val2[k]=j;
			k++;
			break;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		flag=0;
		if(val1[i]==val2[i])
		{
			//do nothing;
			flag=1;
		}
		else 
			break;
	}
	if(flag==1)
		cout<<"1";
	else
		cout<<"0";
	
	return 0;
}
