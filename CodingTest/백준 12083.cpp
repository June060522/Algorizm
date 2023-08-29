#include<iostream>
#include <queue>
#include <unordered_map>

using namespace std;

vector<int> node[201];
int isVisited[201];
int n;

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

	int repeat = 0;
	cin >> repeat;
	for (size_t i = 1; i <= repeat; i++)
	{
		unordered_map<string, int> um;
		fill(isVisited, isVisited + 201, 0);
		for (size_t j = 0; j < 201; j++)
			node[j].clear();

		cin >> n;
		string c, d;
		int idx = 1;
		for (size_t j = 0; j < n; j++)
		{
			cin >> c >> d;
			if (um.find(c) == um.end())
				um[c] = idx++;
			if (um.find(d) == um.end())
				um[d] = idx++;
			node[um[c]].push_back(um[d]);
			node[um[d]].push_back(um[c]);
		}
		n = idx;
		for (size_t j = 1; j <= n; j++)
		{
			if (isVisited[j] == 0)
				Bfs(j);
		}

		cout << "Case #" << i << ": ";
		if (CheckGraph())
			cout << "Yes" << '\n';
		else
			cout << "No" << '\n';

	}
}