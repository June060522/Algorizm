#include <iostream>

using namespace std;

int zone[52][52];
bool visited[52][52];
int m, n, landCnt = 0;

void Dfs(int x, int y)
{
	if (!visited[x][y] && zone[x][y] == 1 && x >= 0 && y >= 0 && y < m && x < n)
	{
		visited[x][y] = true;
		Dfs(x + 1, y);
		Dfs(x - 1, y);
		Dfs(x, y + 1);
		Dfs(x, y - 1);
		Dfs(x + 1, y + 1);
		Dfs(x + 1, y - 1);
		Dfs(x - 1, y + 1);
		Dfs(x - 1, y - 1);
	}
}

int main()
{
	while (true)
	{
		landCnt = 0;
		cin >> m >> n;

		if (m == 0 && n == 0)
			break;

		fill(&zone[0][0], &zone[51][51], 0);
		fill(&visited[0][0], &visited[51][51], false);

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> zone[i][j];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (!visited[i][j] && zone[i][j] == 1)
				{
					landCnt++;
					visited[i][j] = true;
					Dfs(i + 1, j);
					Dfs(i - 1, j);
					Dfs(i, j + 1);
					Dfs(i, j - 1);

					Dfs(i + 1, j + 1);
					Dfs(i + 1, j - 1);
					Dfs(i - 1, j + 1);
					Dfs(i - 1, j - 1);
				}
			}
		}


		cout << landCnt << '\n';
	}
}