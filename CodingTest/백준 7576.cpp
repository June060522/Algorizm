#include <iostream>
#include <queue>

using namespace std;

int zone[1001][1001];
int n, m;

int answer = 0;
int namuge = 0;

int _x[4] = { 1,-1,0,0 };
int _y[4] = { 0,0, 1,-1 };

queue<pair<int, int>> q;
int Bfs()
{

	while (!q.empty())
	{
		answer++;
		vector<pair<int, int>> v;
		while (!q.empty())
		{
			pair<int, int> temp = q.front();
			q.pop();
			int x;
			int y;
			for (int i = 0; i < 4; i++)
			{
				x = temp.first + _x[i];
				y = temp.second + _y[i];
				if (x < 0 || y < 0 || x >= m || y >= n)
					continue;

				if (zone[x][y] == 0)
				{
					namuge--;
					zone[x][y] = 1;
					v.push_back({ x,y });
				}
			}
		}

		for (size_t i = 0; i < v.size(); i++)
			q.push(v[i]);
	}

	if (namuge > 0)
		return -1;
	else
		return answer - 1;
}

int main()
{
	cin >> n >> m;
	namuge = n * m;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> zone[i][j];
			if (zone[i][j] == 1)
			{
				namuge--;
				q.push({ i,j });
			}
			else if (zone[i][j] == -1)
			{
				namuge--;
			}
		}
	}
	cout << Bfs();
}