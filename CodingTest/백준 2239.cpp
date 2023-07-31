#include <iostream>
#include <cmath>

using namespace std;

int answer[10][10];
bool visited[10][10];
bool complete = false;


bool check(int n, int m)
{
	int vertical = ((n - 1) / 3) * 3;
	int horizon = ((m - 1) / 3) * 3;

	for (int i = vertical + 1; i <= vertical + 3; i++)
	{
		for (int j = horizon + 1; j <= horizon + 3; j++)
		{
			if ((i != n || j != m) && answer[i][j] == answer[n][m])
				return false;
		}
	}

	for (int i = 1; i <= 9; i++)
		if (i != n && answer[i][m] == answer[n][m])
		{
			return false;
		}

	for (int i = 1; i <= 9; i++)
		if (i != m && answer[n][i] == answer[n][m])
		{
			return false;
		}

	return true;
}

void backTracking(int n, int m)
{
	if (m > 9)
	{
		m = 1;
		n++;
	}

	if (n == 10 || complete)
	{
		complete = true;
		return;
	}

	if (visited[n][m])
	{
		backTracking(n, m + 1);
	}
	else
	{
		for (int i = 1; i <= 9; i++)
		{
			answer[n][m] = i;
			if (check(n, m) == false)
			{
				answer[n][m] = 0;
				continue;
			}
			backTracking(n,m + 1);
			if (complete)
				return;
			answer[n][m] = 0;

		}
	}
}
int main()
{
	char input;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cin >> input;
			if (input != '0')
				visited[i][j] = true;

			answer[i][j] = input - '0';
		}
	}

	backTracking(1, 1);
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << answer[i][j] << " ";
		}
		cout << '\n';
	}
}