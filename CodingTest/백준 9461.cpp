#include <iostream>

using namespace std;

long long Dp[101] = { 0,1,1,1,2,2,3,4,5,7,9 };
int main()
{
	for (int i = 11; i < 101; i++)
	{
		Dp[i] = Dp[i - 1] + Dp[i - 5];
	}
	int repeat = 0;
	int n = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> n;
		cout << Dp[n] << '\n';
	}
}