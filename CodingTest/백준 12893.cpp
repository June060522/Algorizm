#include<iostream>
#include <queue>

using namespace std;

vector<int> node[20001];
int isVisited[20001];
int n, m;

void Bfs(int start)
{
	int idx = 1;
	isVisited[start] = idx;
	queue<int> q;
	q.push(start);
	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		if (isVisited[x] == 1)
			idx = 2;
		else if (isVisited[x] == 2)
			idx = 1;

		for (size_t i = 0; i < node[x].size(); i++)
		{
			if (!isVisited[node[x][i]])
			{
				isVisited[node[x][i]] = idx;
				q.push(node[x][i]);
			}
		}
	}
}

bool CheckGraph()
{
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 0; j < node[i].size(); j++)
		{
			if (isVisited[i] == isVisited[node[i][j]])
				return false;
		}
	}
	return true;
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);


	cin >> n >> m;
	int a, b;
	for (size_t j = 0; j < m; j++)
	{
		cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}

	for (size_t j = 1; j <= n; j++)
	{
		if (isVisited[j] == 0)
			Bfs(j);
	}

	if (CheckGraph())
		cout << "1";
	else
		cout << "0";

}