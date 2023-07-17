#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[100001];
vector<int> graph[100001];
int answer[100001];
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
                answer[y] = x;
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main()
{
    int repeat = 0,a,b;
    cin >> repeat;

    for (int i = 1; i < repeat; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(1);
    for (int i = 2; i <= repeat; i++)
    {
        cout << answer[i] << '\n';
    }
}