#include <iostream>

using namespace std;
long long dp[1000001][2];
int main()
{
	dp[0][0] = 0;
	dp[1][0] = 2;
	dp[2][0] = 7;
	dp[2][1] = 1;

	for (int i = 3; i <= 1000000; ++i)
	{
		dp[i][1] = (dp[i - 3][0] + dp[i - 1][1]) % 1000000007;
		dp[i][0] = (dp[i][1] * 2 + dp[i - 1][0] * 2 + dp[i - 2][0] * 3) % 1000000007;
	}

	int input;
	cin >> input;
	cout << dp[input][0];
}