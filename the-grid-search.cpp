#include <iostream>

using namespace std;

int main(){

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */


    char a[1000][1000];
    char b[1000][1000];
    int i,j,t,l,x,y,x1,y1,z,w,m,n;

    cin>>t;
    for(l=0;l<t;l++){
    cin>>x>>y;
   for(i=0;i<x;i++)
   {
       for(j=0;j<y;j++)
       cin>>a[i][j];
   }
        cin>>x1>>y1;
        for(i=0;i<x1;i++)
        {
            for(j=0;j<y1;j++)
            cin>>b[i][j];}
            m=0;
            n=0;
    for(i=0;i<(x-x1+1);i++)
    {
        for(j=0;j<(y-y1+1);j++)

            {
                if(a[i][j]==b[0][0] && a[i+x1-1][j+y1-1]==b[x1-1][y1-1])
                 {
                     z=i;
                     m=0;
                    for(z=z;z<(i+x1);z++)
                {
                    n=0;
                    for(w=j;w<(j+y1);w++)
                    {if(a[z][w]!=b[m][n])
                    z=i+x1;
                    else{
                        if(z==(i+x1-1) && w==(j+y1-1)){
                            cout<<"YES\n";
                            i=x-x1+2;
                            j=y-y1+2;}}
                            n++;}
                            m++;
                }
            }
            }}
            if(i!=x-x1+3)
                cout<<"NO\n";
    }
    return 0;
}
