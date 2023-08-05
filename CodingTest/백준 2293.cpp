#include <iostream>
#include <cmath>
using namespace std;

int Dp[501][501];
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> Dp[i][j];
		}
	}

	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			Dp[i][j] = max(Dp[i][j] + Dp[i + 1][j], Dp[i][j] + Dp[i + 1][j + 1]);
		}
	}

	cout << Dp[1][1];
}