#include <iostream>

using namespace std;

long long Dp[101][10];
int main()
{
	for (int i = 1; i < 10; i++)
		Dp[1][i] = 1;

	for (int i = 2; i < 101; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				Dp[i][j] = Dp[i - 1][j + 1];
			}
			else if (j == 9)
			{
				Dp[i][j] = Dp[i - 1][j - 1];
			}
			else
			{
				Dp[i][j] = Dp[i - 1][j - 1] + Dp[i - 1][j + 1];
			}
			Dp[i][j] %= 1000000000;
		}
	}

	int n;
	cin >> n;
	long long result = 0;
	for (int i = 0; i < 10; i++)
	{
		result += Dp[n][i];
		result %= 1000000000;
	}
	cout << result;
}