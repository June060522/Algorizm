#include <iostream>
#include <math.h>
using namespace std;

int num[1001];
int Dp[1001];
int answer = 0;
int main()
{
	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
		Dp[i] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (num[i] > num[j])
				Dp[i] = max(Dp[i], Dp[j] + 1);
		}
		answer = max(answer, Dp[i]);
	}

	cout << answer;
}