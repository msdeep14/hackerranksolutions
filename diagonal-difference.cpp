//https://www.hackerrank.com/challenges/diagonal-difference
//mandeep singh @msdeep14
#include<iostream>
using namespace std;
int main()
    {
    int num,n,j=0,k=0,sq,i,sum1=0,sum2=0,diff,x;
    cin>>n;
    sq=n*n;
    for(i=0;i<sq;i++)
        {
        cin>>num;
        if(k==n+1 || k==0)
            {
            sum1=sum1+num;
            k=0;
        }
        if(j==n-1 && i!=sq-1)
            {
            sum2=sum2+num;
            j=0;
        }
		k++;
		j++;
    }
    diff=sum1-sum2;
    if(diff<0)
        {
        diff=2*(-diff)+diff;
    }
    cout<<diff;
    return 0;
}
