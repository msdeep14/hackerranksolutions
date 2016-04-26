#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    static  long long int dp[5005][5005];
    string A,B;
    cin>>A>>B;
    int N;
    N=A.length();
    	
    for (int i = 0; i <= N; ++i)
	  dp[0][i] = dp[i][0] = 0;
	for (int i = 1; i <= N; ++i)
	  for (int j = 1; j <= N; ++j) {
	    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	    if (A[i-1] == B[j-1])
	      dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);
        	  }
	
	int answer = dp[N][N];
    cout<<answer;

    return 0;
}
