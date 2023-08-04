#include <iostream>

using namespace std;

int Dp[31] = {0,0,3,0,11};
int main()
{
	int n;
	cin >> n;

	for (int i = 6; i <= 30; i += 2)
	{
		Dp[i] = Dp[i - 2] * 4 - Dp[i - 4];
	}

	if (n % 2 == 0)
		cout << Dp[n];
	else
		cout << 0;
}