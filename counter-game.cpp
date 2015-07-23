//counter game
//mandeep singh @msdeep14
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	unsigned long long int t,i,j,mov,count,temp,num,res,rem,flag=0;
	cin>>t;
	while(t--)
	{
		cin>>num;
		mov=1;
		while(num!=1)
		{
			flag=0;
			//if n is power of 2;
			/*if(((double)log(num)/(double)log(2))%2==0)
			{
				num=num-num/2;
			}
			*/
			//
			temp=num;
			while(temp>1)
		    {
				rem=temp%2;
				temp=temp/2;
				if(rem!=0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				num=num/2;
			}
			else
			{
				temp=num;
				count=0;
				while(temp>0)
				{
					temp=temp/2;
					count++;
				}
				//calculate power of power(2,count-1);
				res=pow(2,count-1);
				num=num-res;
			}
			if(num==1)
			{
				if(mov%2==0)
					cout<<"Richard\n";
				else
					cout<<"Louise\n";
			}
			mov++;
		}
	}	
	return 0;
}
