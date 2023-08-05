#include <iostream>
#include <cmath>

using namespace std;

int Dp[1001];
int num[1001];
int answer = 0;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
		Dp[i] = num[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (num[i] < num[j])
				Dp[i] = max(Dp[i], Dp[j] + num[i]);
		}
		answer = max(answer, Dp[i]);
	}

	cout << answer;
}