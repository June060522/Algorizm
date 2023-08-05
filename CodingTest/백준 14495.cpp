#include <iostream>

long long Dp[117] = { 0,1,1,1,2 };
using namespace std;
int main()
{
	for (int i = 5; i < 117; i++)
		Dp[i] = Dp[i - 1] + Dp[i - 3];

	int n;
	cin >> n;
	cout << Dp[n];
}