#include <string>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int answer = 0;
vector<int> graph[20001];
bool visited[20001];

void Bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        answer = q.size();
        vector<int> saveVec;
        while (!q.empty())
        {
            saveVec.push_back(q.front());
            q.pop();
        }

        for (int i = 0; i < saveVec.size(); i++)
        {
            for (int j = 0; j < graph[saveVec[i]].size(); j++)
            {
                if (!visited[graph[saveVec[i]][j]])
                {
                    visited[graph[saveVec[i]][j]] = true;
                    q.push(graph[saveVec[i]][j]);
                }
            }
        }
    }
}

int solution(int n, vector<vector<int>> edge)
{
    for (int i = 0; i < edge.size(); i++)
    {
        graph[edge[i][0]].push_back(edge[i][1]);
        graph[edge[i][1]].push_back(edge[i][0]);
    }

    Bfs(1);

    return answer;
}

int main()
{
    cout << solution(6, { {3,6},{4,3},{3,2},{1,3},{1,2},{2,4},{5,2} });
}