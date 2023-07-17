#include <iostream>
#include <algorithm>

using namespace std;

bool visited[101][101];
char zone[101][101];
int dotCnt = 0;
int zoneCnt = 0;

void Dfs(int x, int y)
{
	if (visited[x][y] || zone[x][y] != '.')
		return;

	dotCnt++;
	visited[x][y] = true;

	Dfs(x + 1, y);
	Dfs(x, y + 1);
}

int main()
{
	int repeat = 0;
	cin >> repeat;

	for (int k = 0; k < repeat; k++)
	{
		zoneCnt = 0;
		dotCnt = 0;

		fill(&visited[0][0], &visited[100][100], false);
		fill(&zone[0][0], &zone[100][100], ' ');

		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> zone[i][j];
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (zone[i][j] == '.' && !visited[i][j])
				{
					zoneCnt++;
					dotCnt++;
					visited[i][j] = true;
					Dfs(i + 1, j);
					Dfs(i, j + 1);
				}
			}
		}

		if (zoneCnt > 1)
			cout << zoneCnt << " sections, ";
		else
			cout << zoneCnt << " section, ";

		if (dotCnt > 1)
			cout << dotCnt << " spaces\n";
		else
			cout << dotCnt << " space\n";
	}
}