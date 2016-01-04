//https://www.hackerrank.com/contests/magic-lines-july-2015/challenges/run-length-encoding
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <assert.h>
using namespace std; 

string intToString(int a)
{
   if(!a) return "0";
   string ret;
   for(int i=a; i>0; i=i/10) 
      ret.push_back((i%10)+48);
   reverse(ret.begin(),ret.end());
   return ret;
}
string encode(string source) {
        string dest;
        for (int i = 0; i < (int)source.size(); i++) {
            int runLength = 1;
            while(source[i]==source[i+1])
            {
                runLength++;
                i++;
            }
            dest+=source[i];
            dest+=intToString(runLength);
          
        }
        return dest;
}
int main()
{
      string s;
      cin>>s;
      cout<<encode(s)<<endl;
      return 0;
}
