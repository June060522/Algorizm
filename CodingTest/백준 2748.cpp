#include <iostream>
using namespace std;

long long int Dp[91] = { 0,1 };
int main()
{
	int x;
	cin >> x;

	for (int i = 2; i < 91; i++)
	{
		Dp[i] = Dp[i - 1] + Dp[i - 2];
	}

	cout << Dp[x];
}