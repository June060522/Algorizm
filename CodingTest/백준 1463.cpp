#include <iostream>

using namespace std;

void solve(int,int);
int answer = INT16_MAX;
int main()
{
	int input = 0;
	cin >> input;
	solve(input, 0);
	cout << answer;
}

void solve(int num,int cnt)
{
	if (cnt > answer)
		return;
	if (num == 1)
	{
		if (answer > cnt)
			answer = cnt;
		return;
	}

	if (num % 2 == 0) solve(num / 2, cnt + 1);
	if (num % 3 == 0) solve(num / 3, cnt + 1);
	solve(num - 1, cnt + 1);
}