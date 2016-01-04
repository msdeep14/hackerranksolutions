//https://www.hackerrank.com/contests/segfault/challenges/count-the-divisors
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n, other;
     
     scanf("%d", &n);
  
     int result = 0;
    int j = 2;
  
    while(j <= n){
      if(n%j == 0){
        result = result + 1;
        other = n/j;
        result = result;
      }
      j++;
    }
  
     printf("%d", result+1);

    return 0;
}
    
