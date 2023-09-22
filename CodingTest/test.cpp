#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << '\n';

        for (int v : graph[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

int main() {
    int N, M, R;
    cin >> N >> M >> R;

    graph.resize(N + 1);
    visited.resize(N + 1, false);

    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 0; i < N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    bfs(R);

    for (int i = 1; i <= N; ++i) {
        if (i != R && !visited[i]) {
            cout << "0" << '\n';
        }
    }

    return 0;
}