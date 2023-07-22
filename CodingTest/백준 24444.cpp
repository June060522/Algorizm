#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool visited[200001];
vector<int> graph[200001];
int answerArr[200001] = { 0 };
int idx = 1;
void Bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    answerArr[start] = idx++;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = 0; i < graph[x].size(); i++)
        {
            int y = graph[x][i];
            if (!visited[y])
            {
                answerArr[y] = idx++;
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main()
{
    int a,b,start;
    cin >> a >> b >> start;
    int c, d;
    for (int i = 0; i < b; i++)
    {
        cin >> c >> d;
        graph[c].push_back(d);
        graph[d].push_back(c);
    }

    for (int i = 0; i < a; i++)
    {
        sort(graph[i].begin(), graph[i].end(), greater<>());
    }

    Bfs(start);

    for (int i = 1; i <= a; i++)
    {
        cout << answerArr[i] << '\n';
    }
}