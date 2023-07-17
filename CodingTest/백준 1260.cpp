#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

bool visited[1001];
vector<int> graph[1001];
void Bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    cout << start << " ";
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = 0; i < graph[x].size(); i++)
        {
            int y = graph[x][i];
            if (!visited[y])
            {
                cout << y << " ";
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

bool visitedDfs[1001];
void Dfs(int start)
{
    if (!visitedDfs[start])
    {
       cout << start << " ";
        visitedDfs[start] = true;
        for (int i = 0; i < graph[start].size(); i++)
        {
            Dfs(graph[start][i]);
        }
    }
}

int main()
{
	int a, b;
	int size = 0;
	int repeat = 0;
	int start = 0;
	cin >> size >> repeat >> start;

	for (int i = 0; i < repeat; i++)
	{
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
	}

    for (int i = 1; i <= size; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
	Dfs(start);
    cout << '\n';
	Bfs(start);
}