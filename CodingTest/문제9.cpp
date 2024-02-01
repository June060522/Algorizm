#include <iostream>

using namespace std;

int arr[51][51];
int tempArr[51][51];
int n, m;

void DFS(int x,int y)
{
	if (x <= 0 || y <= 0 || x > n || y > m)
		return;

	if (tempArr[x][y] == -1)
		return;

	tempArr[x][y] = -1;
	DFS(x + 1, y);
	DFS(x - 1, y);
	DFS(x, y + 1);
	DFS(x, y - 1);
}

int solve(int k)
{
	int zone = 0;
	for(int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			if (arr[i][j] <= k)
				tempArr[i][j] = -1;
			else
				tempArr[i][j] = arr[i][j];
		}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (tempArr[i][j] != -1)
			{
				zone++;
				DFS(i, j);
			}
		}
	}
	return zone;
}

int main()
{
	int answer = 1;
	int high = 1;
	int maxHigh = 0;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			cin >> arr[i][j];
			maxHigh = max(maxHigh, arr[i][j]);
		}

	for (int i = 1; i < maxHigh; i++)
	{
		int tmp = solve(i);
		if (tmp > answer)
		{
			answer = tmp;
			high = i;
		}
	}

	cout << high << " " << answer;
}