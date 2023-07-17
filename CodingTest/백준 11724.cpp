#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[1001];
vector<int> graph[1001];
void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = 0; i < graph[x].size(); i++)
        {
            int y = graph[x][i];
            if (!visited[y])
            {
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main()
{
    int CC, input, a, b;
    int cnt = 0;
    cin >> CC >> input;
    for (int i = 0; i < input; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= CC; i++)
    {
        if (!visited[i])
        {
            cnt++;
            bfs(i);
        }
    }

    cout << cnt;
}