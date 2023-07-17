#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[9];
vector<int> graph[9];

void Bfs(int start) {
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << ' ';
		for (int i = 0; i < graph[x].size(); i++) {
			int y = graph[x][i];
			if (!visited[y]) {
				q.push(y);
				visited[y] = true;
			}
		}
	}
}

int main()
{
	int repeat = 0;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		int dotCnt = 0;
		int zoneCnt = 0;
		int x, y;
		cin >> x >> y;
		
		char **zone = new char*[x];
		for (int j = 0; j < x; j++)
			zone[j] = new char[y];
	}
}