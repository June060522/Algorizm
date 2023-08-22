#include <iostream>

using namespace std;

int Dp[2001][2001];
int num[2001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
		Dp[i][i] = 1;

		if (i != 1 && num[i] == num[i - 1])
			Dp[i - 1][i] = 1;
	}

	for (int i = 2; i <= n - 1; i++)
	{
		for (int j = 1; i + j <= n; j++)
		{
			if (num[j] == num[i + j] && Dp[j + 1][i + j - 1] == 1)
				Dp[j][j + i] = 1;
		}
	}

	int k, l;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k >> l;
		cout << Dp[k][l] << '\n';
	}
}