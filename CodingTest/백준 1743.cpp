#include <iostream>

using namespace std;

int zone[101][101];
bool visited[101][101];
int answer = 0;
int save = 0;
void Dfs(int x, int y)
{
	if (!visited[x][y] && zone[x][y] == 1)
	{
		visited[x][y] = true;
		save++;

		Dfs(x, y + 1);
		Dfs(x, y - 1);
		Dfs(x + 1, y);
		Dfs(x - 1, y);
	}
}

int main()
{
	int m, n, repeat, a, b;
	cin >> m >> n >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b;
		zone[a][b] = 1;
	}

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (!visited[i][j] && zone[i][j] == 1)
			{
				save = 1;
				visited[i][j] = true;
				Dfs(i, j + 1);
				Dfs(i, j - 1);
				Dfs(i + 1, j);
				Dfs(i - 1, j);

				answer = max(answer, save);
			}
		}
	}

	cout << answer;
}