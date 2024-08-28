#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a, b, c;

vector<int> node[100001];
long long isVisited[100001];
long long index = 0;

long long answer = 0;

void DFS(int n, int depth)
{
	if (isVisited[n] != -1)
		return;

	isVisited[n] = index++;
	answer += depth * index;

	for (int i = 0; i < node[n].size(); i++)
	{
		DFS(node[n][i],depth + 1);
	}
}

int main()
{
	cin >> a >> b >> c;

	int x, y;
	for (int i = 0; i < b; i++)
	{
		cin >> x >> y;
		node[x].push_back(y);
		node[y].push_back(x);
	}

	for (int i = 1; i <= a; i++)
	{
		isVisited[i] = -1;
		sort(node[i].begin(), node[i].end(), greater<>());
	}

	DFS(c,0);

	cout << answer;
}