#include <iostream>

using namespace std;

int Dp[1001];
int Box[1001];
int answer = 0;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> Box[i];
		Dp[i] = 1;
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (Box[i] > Box[j])
			{
				Dp[i] = max(Dp[i], Dp[j] + 1);
			}
		}
		answer = max(answer, Dp[i]);
	}
	
	cout << answer;
}