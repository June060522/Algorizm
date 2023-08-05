#include <iostream>
using namespace std;

long long int Dp[1000001] = {0,1,1};
int main()
{
	for (int i = 3; i < 1000001; i++)
		Dp[i] = (Dp[i - 1] + Dp[i - 2]) % 1000000007;

	int n;
	cin >> n;
	cout << Dp[n];
}