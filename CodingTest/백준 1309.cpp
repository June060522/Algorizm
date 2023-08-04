#include <iostream>

using namespace std;

int Dp[100001] = {0, 3, 7, 17,41 };
int main()
{
	for (int i = 5; i < 100001; i++)
	{
		Dp[i] = (Dp[i - 1] * 2 + Dp[i - 2]) % 9901;
	}
	int n;
	cin >> n;
	cout << Dp[n];
}