#include <iostream>
using namespace std;

long long int Dp[91] = {0, 1, 1, 2, 3};
int main()
{
	for (int i = 5; i < 91; i++)
	{
		Dp[i] = Dp[i - 1] + Dp[i - 2];
	}
	int n;
	cin >> n;
	cout << Dp[n];
}