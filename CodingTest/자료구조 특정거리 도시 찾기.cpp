#include <iostream>
#include <queue>

using namespace std;

vector<int> node[300001];
bool isVisited[300001];
int n, m, x, k;
void DFS(int start)
{
	int length = 0;
	priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(start);
	isVisited[start] = true;

	while (!pq.empty())
	{
		vector<int> v;
		if (length == x)
		{
			while (!pq.empty())
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
			return;
		}
		else
		{
			while (!pq.empty())
			{
				v.push_back(pq.top());
				pq.pop();
			}

			for (size_t i = 0; i < v.size(); i++)
			{
				for (size_t j = 0; j < node[v[i]].size(); j++)
				{
					if (!isVisited[node[v[i]][j]])
					{
						isVisited[node[v[i]][j]] = true;
						pq.push(node[v[i]][j]);
					}
				}
			}
		}
		length++;
	}
	cout << "-1";
}

int main()
{
	cin >> n >> m >> x >> k;

	int a, b;
	for (size_t i = 0; i < m; i++)
	{
		cin >> a >> b;
		node[a].push_back(b);
	}

	DFS(k);
}