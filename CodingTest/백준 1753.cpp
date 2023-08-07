#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int V, E;
vector<vector<pair<int,int >>> graph;
vector<int> answer;
bool isVisited[20001];

void solve(int start)
{
	priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
	q.push(make_pair(0,start));

	while (!q.empty())
	{
		pair<int,int> x = q.top();
		q.pop();
		if (isVisited[x.second])
			continue;

		isVisited[x.second] = true;

		for (int i = 0; i < graph[x.second].size(); i++)
		{
			answer[graph[x.second][i].first] = min(answer[graph[x.second][i].first], answer[x.second] + graph[x.second][i].second);
				q.push(make_pair(answer[graph[x.second][i].first], graph[x.second][i].first));
		}
	}
}

int main()
{
	int start = 0;
	cin >> V >> E >> start;
	answer.resize(V + 1);
	graph.resize(V + 1);
	for (int i = 0; i <= V; i++)
	{
		answer[i] = 60000001;
	}
	answer[start] = 0;

	int a, b, c;
	for (int i = 0; i < E; i++)
	{
		cin >> a >> b >> c;		
		graph[a].push_back(make_pair(b,c));
	}

	solve(start);

	for (int i = 1; i <= V; i++)
	{
		if (answer[i] == 60000001)
			cout << "INF" << '\n';
		else
			cout << answer[i] << '\n';
	}
}