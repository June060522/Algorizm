#include <iostream>
#include <queue>

using namespace std;

vector<vector<int>> map;

int n, x, y, endX, endY;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};
void BFS()
{
	queue<pair<int, int>> p;
	p.push({ x,y });
	int answer = 0;

	while (!p.empty())
	{
		answer++;
		vector<pair<int, int>> v;
		while (!p.empty())
		{
			v.push_back(p.front());
			p.pop();
		}

		for (auto i : v)
		{
			int curX, curY;
			
			for (int j = 0; j < 4; j++)
			{
				curX = i.first;
				curY = i.second;

				while (true)
				{
					curX += dx[j];
					curY += dy[j];

					if ((curX <= 0 || curY <= 0 || curX > n || curY > n))
						break;

					if (map[curX][curY] == 1)
						break;
					if (map[curX][curY] == 2)
						continue;
					map[curX][curY] = 2;
					p.push({ curX,curY });
					if (curX == endX && curY == endY)
					{
						cout << answer - 1;
						return;
					}
				}
			}
		}
	}

	cout << -1;
}

int main()
{
	cin >> n;

	map.resize(n + 2);
	for (int i = 1; i < n + 2; i++)
		map[i].resize(n + 1);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cin >> map[i][j];
	}

	cin >> x >> y >> endX >> endY;
	BFS();
}