#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
/* Head ends here */


long long int stringSimilarity(char a[]) {
	long long int sum=0;
	long long int n=strlen(a);
	vector<long long int> z(n);
	for(long long int i=1,r=0,l=0;i<n;++i){
		if(i<=r)
			z[i]=min(r-i+1,z[i-l]);
		while(i+z[i]<n && a[z[i]]==a[i+z[i]])
			++z[i];
		if(i+z[i]-1>r){
			l=i;
			r=i+z[i]-1;
		}
	}
	for(int i=1;i<n;i++)
		sum+=z[i];
   return sum+n;
}
int main() {
    int t, i;
    scanf("%d",&t);
    char a[100001];
    for (i=0;i<t;i++) {
        scanf("%s",a);
        long long int res=stringSimilarity(a);
		
        printf("%lld\n",res);  
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
