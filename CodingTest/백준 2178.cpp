#include <iostream>
#include <queue>

using namespace std;

bool visited[101][101];
char checkZone[101][101];
vector<pair<int, int>> zone[101][101];
int answer = 1;
int n, m;

void BFS()
{
	queue<pair<int, int>> q;
	q.push(make_pair(1, 1));
	visited[1][1] = true;
	while (!q.empty())
	{
		++answer;
		queue<pair<int, int>> q1;
		while (!q.empty())
		{
			int x = q.front().first;
			int y = q.front().second;
			q1.push(make_pair(x, y));
			q.pop();
		}

		while (!q1.empty())
		{
			for (int i = 0; i < zone[q1.front().first][q1.front().second].size(); i++)
			{
				int a = zone[q1.front().first][q1.front().second][i].first;
				int b = zone[q1.front().first][q1.front().second][i].second;

				if (a == n && b == m)
					return;

				if (!visited[a][b])
				{
					q.push(make_pair(a, b));
					visited[a][b] = true;
				}
			}
			q1.pop();
		}
	}
}

int main()
{
	char input;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> input;
			checkZone[i][j] = input;
			if (checkZone[i][j] == '1')
			{
				if (checkZone[i - 1][j] == '1')
				{
					zone[i - 1][j].push_back(make_pair(i, j));
					zone[i][j].push_back(make_pair(i - 1, j));
				}

				if (checkZone[i + 1][j] == '1')
				{
					zone[i + 1][j].push_back(make_pair(i, j));
					zone[i][j].push_back(make_pair(i + 1, j));
				}

				if (checkZone[i][j - 1] == '1')
				{
					zone[i][j - 1].push_back(make_pair(i, j));
					zone[i][j].push_back(make_pair(i, j - 1));
				}

				if (checkZone[i][j + 1] == '1')
				{
					zone[i][j + 1].push_back(make_pair(i, j));
					zone[i][j].push_back(make_pair(i, j + 1));
				}
			}
		}
	}
	BFS();

	cout << answer;
}