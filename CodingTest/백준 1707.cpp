#include<iostream>
#include <queue>

using namespace std;

vector<int> node[20001];
int isVisited[20001];
int n, m;

bool Dfs(int start)
{
	queue<int> q;
	int idx = 1;
	q.push(start);
	isVisited[start] = idx % 2 + 1;


	while (!q.empty())
	{
		idx++;
		vector<int> saveVec;
		while (!q.empty())
		{
			saveVec.push_back(q.front());
			q.pop();
		}

		for (size_t i = 0; i < saveVec.size(); i++)
		{
			for (size_t j = 0; j < node[saveVec[i]].size(); j++)
			{
				if (isVisited[node[saveVec[i]][j]] == 0)
				{
					isVisited[node[saveVec[i]][j]] = idx % 2 + 1;
					q.push(node[saveVec[i]][j]);
				}
				else
				{
					if (isVisited[node[saveVec[i]][j]] == idx % 2 + 1)
						return false;
				}
			}
		}
	}

	return true;
}

int main()
{
	int repeat = 0;
	cin >> repeat;
	for (size_t i = 0; i < repeat; i++)
	{
		fill(isVisited, isVisited + 20000, 0);
		for (size_t j = 0; j < 20001; j++)
			node[i].clear();

		cin >> n >> m;
		int a, b;
		for (size_t j = 0; j < m; j++)
		{
			cin >> a >> b;
			node[a].push_back(b);
			node[b].push_back(a);
		}

		if (Dfs(1))
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}