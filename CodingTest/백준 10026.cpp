#include <iostream>
#include <algorithm>

using namespace std;
char arr[101][101];
bool isVisited[101][101];

void Bfs(char c, int x, int y)
{
	if (isVisited[x][y] || c != arr[x][y] ||
		x < 0 || y < 0 || x > 101 || y > 101)
		return;

	isVisited[x][y] = true;

	Bfs(c, x + 1, y);
	Bfs(c, x - 1, y);
	Bfs(c, x, y + 1);
	Bfs(c, x, y - 1);
}

int main()
{
	int n;
	char c;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> c;
			arr[i][j] = c;
		}
	}

	int zone = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (!isVisited[i][j])
			{
				isVisited[i][j] = true;
				zone++;
				Bfs(arr[i][j], i + 1, j);
				Bfs(arr[i][j], i - 1, j);
				Bfs(arr[i][j], i, j + 1);
				Bfs(arr[i][j], i, j - 1);
			}
		}
	}

	cout << zone << " ";
	zone = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			isVisited[i][j] = false;
			if (arr[i][j] == 'R')
			{
				arr[i][j] = 'G';
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (!isVisited[i][j])
			{
				isVisited[i][j] = true;
				zone++;
				Bfs(arr[i][j], i + 1, j);
				Bfs(arr[i][j], i - 1, j);
				Bfs(arr[i][j], i, j + 1);
				Bfs(arr[i][j], i, j - 1);
			}
		}
	}

	cout << zone;
}