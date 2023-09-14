#include <string>
#include <iostream>
#include <vector>

using namespace std;

int answer = 0;
vector<int> nodes[201];
bool isVisited[201];

void DFS(int node)
{
    isVisited[node] = true;

    for (size_t i = 0; i < nodes[node].size(); i++)
    {
        if (!isVisited[nodes[node][i]])
            DFS(nodes[node][i]);
    }
}

int solution(int n, vector<vector<int>> computers) {
    for (size_t i = 0; i < computers.size(); i++)
    {
        for (size_t j = 0; j < computers[i].size(); j++)
        {
            if (computers[i][j] == 1 && i != j)
            {
                nodes[i + 1].push_back(j + 1);
            }
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (!isVisited[i])
        {
            DFS(i);
            answer++;
        }
    }

    return answer;
}

int main()
{
    cout << solution(3, { {1,1,0},{1,1,0},{0,0,1} });
}