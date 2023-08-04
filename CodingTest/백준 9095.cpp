#include <iostream>

using namespace std;

int Dp[11] = { 0,1,2,4,7};
int main()
{
	int n = 0,input = 0;
	cin >> n;
	for (int i = 5; i < 11; i++)
	{
		Dp[i] = Dp[i - 1] + Dp[i - 2] + Dp[i -3];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		cout << Dp[input] << '\n';
	}
}