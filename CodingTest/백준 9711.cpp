#include <iostream>

using namespace std;

long long int Dp[10001] = {1,1};
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int repeat;
	cin >> repeat;
	long long int a, b;
	for (int i = 1; i <= repeat; i++)
	{
		Dp[0] = 1;
		Dp[1] = 1;
		cin >> a >> b;
		for (int i = 2; i < a; i++)
		{
			Dp[i] = (Dp[i - 1] + Dp[i - 2]) % b;
		}

		if (b == 1)
			Dp[a - 1] = 0;
		cout << "Case #" << i << ": " << Dp[a - 1] << '\n';
	}
}