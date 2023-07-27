#include <iostream>
#include <algorithm>
using namespace std;

int zone[51][51];
bool visited[51][51];
int answer = 0;

void DFS(int x, int y)
{
	if (zone[x][y] == 1 && !visited[x][y])
	{
		visited[x][y] = true;
		DFS(x - 1, y);
		DFS(x + 1, y);
		DFS(x, y + 1);
		DFS(x, y - 1);
	}
}

int main()
{
	int repeat = 0;
	int m, n, inputCnt;
	int a, b;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		fill(&visited[0][0], &visited[50][50], false);
		fill(&zone[0][0], &zone[50][50], 0);
		answer = 0;
		cin >> m >> n >> inputCnt;

		for (int j = 0; j < inputCnt; j++)
		{
			cin >> a >> b;
			zone[a][b] = 1;
		}

		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (zone[j][k] == 1 && !visited[j][k])
				{
					visited[j][k] = true;
					++answer;
					DFS(j, k - 1);
					DFS(j, k + 1);
					DFS(j - 1, k);
					DFS(j + 1, k);
				}
			}
		}

		cout << answer << '\n';
	}
}