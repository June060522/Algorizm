#include<iostream>

using namespace std;

char map[1001][1001];
int isVisited[1001][1001];
int idx = 1;
int answer = 0;

void Dfs(int i, int j)
{
	if (isVisited[i][j] != 0)
	{
		if (isVisited[i][j] != idx)
			answer--;
		return;
	}

	isVisited[i][j] = idx;

	if (map[i][j] == 'D')
		Dfs(i + 1, j);
	else if (map[i][j] == 'U')
		Dfs(i - 1, j);
	else if (map[i][j] == 'R')
		Dfs(i, j + 1);
	else if (map[i][j] == 'L')
		Dfs(i, j - 1);
}

int main()
{
	cin.tie(nullptr);

	char input;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> input;
			map[i][j] = input;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (!isVisited[i][j])
			{
				answer++;
				isVisited[i][j] = ++idx;
				if (map[i][j] == 'D')
					Dfs(i + 1, j);
				else if (map[i][j] == 'U')
					Dfs(i - 1, j);
				else if (map[i][j] == 'R')
					Dfs(i, j + 1);
				else if (map[i][j] == 'L')
					Dfs(i, j - 1);
			}
		}
	}

	cout << answer;
}