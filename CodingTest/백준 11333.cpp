#include <iostream>

using namespace std;

long long dp[10001] = { 0 };
#define MOD 1000000007
int main()
{
	dp[0] = 1;
	dp[3] = 3;
	dp[6] = 13;
	for (int i = 9; i < 10001; i+= 3)
	{
		dp[i] = (((5 * dp[i - 3]) % MOD) + MOD - ((3 * dp[i - 6]) % MOD) + dp[i - 9]) % MOD;
	}

	int testcase = 0,n;
	cin >> testcase;
	for (int i = 0; i < testcase; ++i)
	{
		cin >> n;
		cout << dp[n] << '\n';
	}
}