#include <iostream>
#include <cmath>
using namespace std;

int answer = -1001;
int Dp[100001];
int num[100001];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
	}

	for (int i = 1; i <= n; i++)
	{
		Dp[i] = max(num[i - 1] + num[i], max(Dp[i - 1] + num[i],num[i]));
		answer = max(answer, Dp[i]);
	}
	cout << answer;
}