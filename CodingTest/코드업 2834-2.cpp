#include <iostream>
using namespace std;

int memo[40][40][40];
int n, k;
int solve(int oo, int xx, int y)
{
	if (oo > n || xx > n || y >= k)
		return 0;
	if (oo == n && xx == n)
		return 1;
	if (memo[oo][xx][y])
		return memo[oo][xx][y];
	return memo[oo][xx][y] = solve(oo + 1, xx + 1, y + 1) + solve(oo + 2, xx + 1, y + 1)
		+ solve(oo + 1, xx + 2, y + 1) + solve(oo + 2, xx + 2, y + 1);
}
int main()
{
	cin >> n >> k;
	cout << solve(0, 0, 0);
}