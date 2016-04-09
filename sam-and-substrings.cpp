#include<iostream>
#include<string>
using namespace std;
#define MOD 1000000007
int main()
{
    string s;
    int arr[200001];
	arr[1] = 1;
	for (int i = 2; i <= 200001; i++)
		arr[i] = ((long long)arr[i - 1] * 10 + 1) % MOD;

	cin >> s;
	int n = (int)s.size();
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int digit = s[i - 1] - '0';
		sum = ((long long)digit * i * arr[n - i + 1] + sum) % MOD;
	}
	cout <<sum;
	return 0;
}
