#include <iostream>
#include <queue>

using namespace std;

vector<int> graph[300001];
bool isVisited[300001];

int N, M, K, X;
void Dfs(int start)
{
	int distance = -1;
	priority_queue<int,vector<int>,greater<int>> q;
	q.push(start);
	isVisited[start] = true;

	while (!q.empty())
	{
		distance++;
		if (distance == K)
		{
			while (!q.empty())
			{
				cout << q.top() << '\n';
				q.pop();
			}
		}
		else
		{
			vector<int> v;
			while (!q.empty())
			{
				for (int i = 0; i < graph[q.top()].size(); i++)
					v.push_back(graph[q.top()][i]);
				q.pop();
			}

			for (int i = 0; i < v.size(); i++)
			{
				if (isVisited[v[i]]) continue;

				q.push(v[i]);
				isVisited[v[i]] = true;
			}
		}
	}

	if (distance != K)
		cout << -1;
}

int main()
{
	int a, b;
	cin >> N >> M >> K >> X;
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		graph[a].push_back(b);
	}

	Dfs(X);
}