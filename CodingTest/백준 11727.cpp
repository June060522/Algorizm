#include <iostream>
using namespace std;

int Dp[1001] = {0,1,3,5, 11};
int main()
{
	for (int i = 5; i < 1001; i++)
	{
		Dp[i] = (Dp[i - 1] + Dp[i - 2] * 2) % 10007;
	}
	int m;
	cin >> m;
	cout << Dp[m];
}