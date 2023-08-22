#include<iostream>
#include <queue>

using namespace std;

int n;
int answer = 0;

pair<int,int> graph[100001];
int isVisted[100001] = { 0 };

void Dfs(int start, int idx)
{
	int n = graph[start].first;
	graph[start].second = idx;

	if (isVisted[n] == 0)
	{
		isVisted[n] = isVisted[start] + 1;
		Dfs(n, idx);
	}
	else
	{
		if (graph[start].second == graph[n].second)
			answer += isVisted[n] - 1;
		else
			answer += isVisted[start];
	}
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int repeat = 0;
	int Input;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> n;
		answer = 0;

		fill(isVisted, isVisted + 100001, 0);
		fill(graph, graph + 100001, make_pair(0,0));

		for (int j = 1; j <= n; j++)
		{
			cin >> Input;
			graph[j] = make_pair(Input,0);
		}

		for (int j = 1; j <= n; j++)
		{
			if (isVisted[j] == 0)
			{
				isVisted[j] = 1;
				Dfs(j,j);
			}
		}

		cout << answer << '\n';
	}
}