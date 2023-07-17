#include <iostream>
#include <vector>
using namespace std;

bool visited[51][51];
char tile[51][51];

void Dfs(int x, int y, char cur)
{
	if (tile[x][y] == cur && !visited[x][y])
	{
		visited[x][y] = true;
		if (cur == '-')
			Dfs(x, y + 1, cur);
		else
			Dfs(x + 1, y, cur);
	}
}

int main()
{
	int n, m,answer = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> tile[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!visited[i][j])
			{
				visited[i][j] = true;
				answer++;

				if (tile[i][j] == '-')
				{
					Dfs(i, j + 1, '-');
				}
				else
				{
					Dfs(i + 1, j, '|');
				}
			}
		}
	}
	cout << answer;
}