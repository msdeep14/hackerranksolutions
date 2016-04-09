//equal challenge
#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int oper(int diff)
{
    if (diff == 0)
        return 0;
    if (diff <= 2)
        return 1;
    if (diff <= 4)
        return 2;
    return oper(diff % 5) + diff / 5;
}
int main() {
    int t,n;
    int candy[10000];
    cin>>t;
    while (t--)
    {
        cin>>n;
        int operations = INT_MAX, min = INT_MAX;
        for (int i=0;i<n;i++)
        {
            cin>>candy[i];
            if (candy[i] < min)
                min = candy[i];
        }
        for (int k = min; k>=min-2; k--)
        {
            int sum = 0;
            for (int i=0;i<n;i++)
                sum += oper(candy[i] - k);
            if (sum < operations)
                operations = sum;
        }
        cout<<operations<<endl;
    }
    return 0;
}
