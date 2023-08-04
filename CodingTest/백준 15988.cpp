#include <iostream>

using namespace std;

long long int Dp[1000001] = { 0,1,2,4,7 };
int main()
{
	int n = 0, input = 0;
	cin >> n;
	for (int i = 5; i < 1000001; i++)
	{
		Dp[i] = (Dp[i - 1] + Dp[i - 2] + Dp[i - 3]) % 1000000009;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		cout << Dp[input] << '\n';
	}
}