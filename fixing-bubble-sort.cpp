//https://www.hackerrank.com/contests/magic-lines-july-2015/challenges/fixing-bubble-sort
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
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <assert.h>

using namespace std;
void bubble_sort (vector<int>&a) {
    int n=a.size();
    int i, t, s = 1;
    while (1) {
if(s==0)break;
        s = 0;
        
        for (i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                t = a[i];
                a[i] = a[i - 1];
                a[i - 1] = t;
                s = 1;
            }
        }
    }
}

int main() {

   vector<int>a;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
      int x;
      cin>>x;
      a.push_back(x);
   }
   bubble_sort(a);
   for(int i=0;i<(int)a.size();i++)
   {
      cout<<a[i]<<endl;
   }
   return 0;
}

