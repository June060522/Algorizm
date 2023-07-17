#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int answer[100001];
bool visited[100001];
vector<int> v[100001];
int cnt = 1;
void Dfs(int start)
{
	if (!visited[start])
	{
		visited[start] = true;
		answer[start] = cnt++;

		for (int i = 0; i < v[start].size(); i++)
			Dfs(v[start][i]);
	}
}

int main()
{
	int size = 0, repeat = 0, start = 0, a, b;
	cin >> size >> repeat >> start;

	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1; i <= size; i++)
		sort(v[i].begin(), v[i].end(),greater<>());

	Dfs(start);
	for (int i = 1; i <= size; i++)
	{
		cout << answer[i] << '\n';
	}
}