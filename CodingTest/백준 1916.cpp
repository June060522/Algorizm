#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int V, E,End;
vector<vector<pair<int, int >>> graph;
vector<int> answer;
bool isVisited[1001];

void solve(int start)
{
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
	q.push(make_pair(0, start));

	while (!q.empty())
	{
		pair<int, int> x = q.top();
		q.pop();
		if (isVisited[x.second])
			continue;

		if (x.second == End)
		{
			cout << answer[x.second];
			exit(0);
		}

		isVisited[x.second] = true;

		for (int i = 0; i < graph[x.second].size(); i++)
		{
			answer[graph[x.second][i].first] =
				min(answer[graph[x.second][i].first], answer[x.second] + graph[x.second][i].second);
			q.push(make_pair(answer[graph[x.second][i].first], graph[x.second][i].first));
		}
	}
}

int main()
{
	int start = 0;
	cin >> V >> E;
	answer.resize(V + 1);
	graph.resize(V + 1);
	for (int i = 0; i <= V; i++)
	{
		answer[i] = 100000001;
	}

	int a, b, c;
	for (int i = 0; i < E; i++)
	{
		cin >> a >> b >> c;
		graph[a].push_back(make_pair(b, c));
	}

	cin >> start >> End;
	answer[start] = 0;

	solve(start);
}