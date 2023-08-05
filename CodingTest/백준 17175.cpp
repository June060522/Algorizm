#include <iostream>
using namespace std;

long long int Dp[51] = { 1,1,3,5 };
int main()
{
	for (int i = 4; i < 51; i++)
	{
		Dp[i] = (Dp[i - 1] + Dp[i - 2] + 1) % 1000000007;
	}
	int n;
	cin >> n;
	cout << Dp[n];
}