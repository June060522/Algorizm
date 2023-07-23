#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool visited[200001];
vector<int> graph[200001];
int answerArr[200001];
vector<int> save;

int idx = 0;
void Bfs(int start) {
	queue<int> q;
	q.push(start);
	visited[start] = true;
	answerArr[start] = idx++;
	while (!q.empty()) {

		while (!q.empty())
		{
			save.push_back(q.front());
			q.pop();
		}
		for (int j = 0; j < save.size(); j++)
		{
			for (int i = 0; i < graph[save[j]].size(); i++)
			{
				int y = graph[save[j]][i];
				if (!visited[y])
				{
					answerArr[y] = idx;
					q.push(y);
					visited[y] = true;
				}
			}
		}
		save.clear();
		idx++;
	}
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int a, b, start;
	cin >> a >> b >> start;
	int c, d;
	fill(answerArr, answerArr + a + 1, -1);
	for (int i = 0; i < b; i++)
	{
		cin >> c >> d;
		graph[c].push_back(d);
		graph[d].push_back(c);
	}

	for (int i = 0; i <= a; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}

	Bfs(start);

	for (int i = 1; i <= a; i++)
	{
		cout << answerArr[i] << '\n';
	}
}