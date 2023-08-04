#include <iostream>
using namespace std;

int Dp[1001] = {0, 1, 2, 3, 5, };

int main()
{
	for (int i = 5; i < 1001; i++)
	{
		Dp[i] = (Dp[i - 1] + Dp[i - 2]) % 10007;
	}
	int n;
	cin >> n;
	cout << Dp[n];
}