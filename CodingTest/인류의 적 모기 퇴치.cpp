#include <iostream>
#include <cmath>

using namespace std;

int zone[51][51];
int n, m;
int answer = 0;

void extermination1(int x, int y)
{
	int saveSum = zone[x][y];
	for (int i = x - 1; i > max(-1, x - m - 1); i--)
		saveSum += zone[i][y];
	for (int i = x + 1; i < min(n, x + m + 1); i++)
		saveSum += zone[i][y];
	for (int i = y - 1; i > max(-1, y - m - 1); i--)
		saveSum += zone[x][i];
	for (int i = y + 1; i < min(n, y + m + 1); i++)
		saveSum += zone[x][i];

	answer = max(answer, saveSum);
}
void extermination2(int x, int y)
{
	int saveSum = zone[x][y];
	for (int i = 1; i <= m; i++)
	{
		if (x + i < n && y + i < n)
			saveSum += zone[x + i][y + i];
		if (x - i >= 0 && y + i < n)
			saveSum += zone[x - i][y + i];
		if (x + i < n && y - i >= 0)
			saveSum += zone[x + i][y - i];
		if (x - i >= 0 && y - i >= 0)
			saveSum += zone[x - i][y - i];
	}


	answer = max(answer, saveSum);
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> zone[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			extermination1(i, j);
			extermination2(i, j);
		}
	}

	cout << answer;
}