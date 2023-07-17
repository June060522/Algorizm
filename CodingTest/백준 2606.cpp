#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[101];
vector<int> graph[101];

int cnt = 0;
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
                cnt++;
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main()
{
    int computer,input,a,b;
    cin >> computer >> input;
    for (int i = 0; i < input; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    bfs(1);

    cout << cnt;
}