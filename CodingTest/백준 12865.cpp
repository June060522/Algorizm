#include <iostream>
using namespace std;

int Dp[101][100001];
int V[101];
int K[101];
int main()
{
	int n, k;
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		cin >> V[i] >> K[i];
	}

	for (int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i < V[j])//무거움
			{
				Dp[j][i] = Dp[j - 1][i];
			}
			else//가벼움
			{
				Dp[j][i] = max(Dp[j - 1][i], K[j] + Dp[j - 1][i - V[j]]);
			}
		}
	}

	cout << Dp[n][k];
}