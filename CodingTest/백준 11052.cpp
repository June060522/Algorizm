#include <iostream>
using namespace std;

int card[1001];
int Dp[1001];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> card[i];

	Dp[1] = card[1];
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			Dp[i] = max(Dp[i], max(card[i], Dp[i - j] + Dp[j]));
		}
	}

	cout << Dp[n];
}