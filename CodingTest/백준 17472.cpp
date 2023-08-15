#include <iostream>
#include <queue>
using namespace std;

typedef struct edge {
	int s, e, v;
	bool operator > (const edge& temp) const {
		return v > temp.v;
	}
};

priority_queue<edge, vector<edge>, greater<edge>> pq;
vector<int> vec;
vector<pair<int, int>> island[7];
int v, h;
int n = 0;
int arr[11][11];
bool isvisited[11][11];


int find(int a) {
	if (a == vec[a])
	{
		return a;
	}
	else
	{
		return vec[a] = find(vec[a]);
	}
}

void Dfs(int x, int y)
{
	if (isvisited[x][y] || arr[x][y] == 0 || x < 0 || y < 0 || x > v || y > h) return;

	island[n].push_back(make_pair(x, y));
	isvisited[x][y] = true;
	Dfs(x, y + 1);
	Dfs(x, y - 1);
	Dfs(x - 1, y);
	Dfs(x + 1, y);
}

int main()
{
	cin >> v >> h;

	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < h; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < h; j++)
		{
			if (arr[i][j] == 1)
			{
				if (isvisited[i][j]) continue;

				isvisited[i][j] = true;
				n++;
				island[n].push_back(make_pair(i, j));
				Dfs(i, j + 1);
				Dfs(i, j - 1);
				Dfs(i - 1, j);
				Dfs(i + 1, j);
			}
		}
	}

	vec.resize(n + 1);

	for (int i = 1; i <= n; i++)
	{
		vec[i] = i;
	}

	int answer = 0;
	int val;
	int a, b, c;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			for (int k = 0; k < island[i].size(); k++)
			{
				for (int l = 0; l < island[j].size(); l++)
				{
					val = 0;
					if (island[i][k].first == island[j][l].first)
					{
						a = island[i][k].first;
						b = island[i][k].second;
						c = island[j][l].second;
						if (b > c)
							swap(b, c);
						while (b < c - 1)
						{
							b++;
							val++;
							if (arr[a][b] == 1)
							{
								val = 0;
								break;
							}
						}
					}
					else if (island[i][k].second == island[j][l].second)
					{
						a = island[i][k].second;
						b = island[i][k].first;
						c = island[j][l].first;
						if (b > c)
							swap(b, c);

						while (b < c - 1)
						{
							b++;
							val++;
							if (arr[b][a] == 1)
							{
								val = 0;
								break;
							}
						}
					}
					if (val >= 2)
						pq.push(edge{ i, j, val });
				}
			}
		}
	}

	int useEdg = 1;


	while (!pq.empty())
	{
		edge e = pq.top();
		pq.pop();
		if (find(e.s) != find(e.e))
		{
			int a = find(e.s);
			int b = find(e.e);

			if (a != b)
				vec[b] = a;

			answer += e.v;

			useEdg++;
		}
	}

	if (useEdg >= n)
		cout << answer;
	else
		cout << -1;
}