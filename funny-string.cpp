#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<cstring>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    string s, r;
    cin>>t;
    while(t--)
        {
        int count=0;
        cin>>s;
        r=s;
        reverse(r.begin(),r.end());
        for(int i=1;i<s.length();i++)
            {
            if(abs(s[i]-s[i-1])==abs(r[i]-r[i-1]))
                count++;
            else
                break;
        }
        if(count==s.length()-1)
            cout<<"Funny\n";
        else
            cout<<"Not Funny\n";
    }
    return 0;
}
