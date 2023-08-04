#include <iostream>
#include <cmath>
using namespace std;
int Dp[1000001] = { 0, 0,1,1,2,3,2,3, };
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 7; i < 1000001; i++)
	{
		if (i % 3 == 0 && i % 2 == 0)
			Dp[i] = min(Dp[i / 2] + 1, min(Dp[i / 3] + 1, Dp[i - 1] + 1));
		else if (i % 3 == 0)
			Dp[i] = min(Dp[i / 3] + 1, Dp[i - 1] + 1);
		else if (i % 2 == 0)
		{
			Dp[i] = min(Dp[i / 2] + 1, Dp[i - 1] + 1);
		}
		else
			Dp[i] = Dp[i - 1] + 1;
	}

	cout << Dp[n] << '\n';
	while (n != 1)
	{
		cout << n << " ";
		if (n % 3 == 0 && n % 2 == 0)
		{
			if (Dp[n / 3] > Dp[n / 2])
			{
				if (Dp[n / 2] > Dp[n - 1])
					n -= 1;
				else
					n /= 2;
			}
			else
			{
				if (Dp[n / 3] > Dp[n - 1])
					n -= 1;
				else
					n /= 3;
			}
		}
		else if (n % 2 == 0)
		{
			if (Dp[n / 2] > Dp[n - 1])
				n -= 1;
			else
				n /= 2;
		}
		else if (n % 3 == 0)
		{
			if (Dp[n / 3] > Dp[n - 1])
				n -= 1;
			else
				n /= 3;
		}
		else
		{
			n -= 1;
		}
	}
	cout << "1 ";
}