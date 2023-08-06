#include <iostream>

using namespace std;

int Dp[10001];
int stair[10001];
int main()
{
	int repeat = 0;
	cin >> repeat;
	for (int i = 1; i <= repeat; i++)
	{
		cin >> stair[i];
	}

	Dp[1] = stair[1];
	Dp[2] = max(stair[2], stair[1] + stair[2]);
	Dp[3] = max(stair[3] + stair[2], stair[3] + stair[1]);

	for (int i = 4; i <= repeat; i++)
	{
		Dp[i] = max(Dp[i - 2] + stair[i], Dp[i - 3] + stair[i - 1] + stair[i]);
	}

	cout << Dp[repeat];
}