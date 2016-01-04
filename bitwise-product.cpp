//https://www.hackerrank.com/contests/magic-lines-july-2015/challenges/bitwise-product
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned int uint;

int t;
uint l, r;

int main() {
    scanf("%d", &t);
    while (t--) {
        cin >> l >> r;
        uint res = 0;
        for (uint i = 0; i < 32; i++) {
            if (r - l + 1 == 1 && (l & 1))
                res=res+pow(2,i);
            l >>= 1; r >>= 1;
        }
        cout << res << endl;
    }
    return 0;
}
