#include<vector>
#include <iostream>
#include <queue>
using namespace std;

int zone[100][100];
bool isVisited[100][100];
int answer = 0;
int solution(vector<vector<int> > maps)
{
    int x = maps.size() - 1;
    int y = maps[0].size() - 1;
    for (int i = 0; i < maps.size(); i++)
    {
        for (int j = 0; j < maps[i].size(); j++)
        {
            zone[i][j] = maps[i][j];
        }
    }

    pair<int, int> p;
    queue<pair<int,int>> q;
    q.push({ 0 , 0 });
    while (!q.empty())
    {
        vector<pair<int, int>> saveVec;
        answer++;
        while (!q.empty())
        {
            saveVec.push_back(q.front());
            q.pop();
        }

        for (int i = 0; i < saveVec.size(); i++)
        {
            p = saveVec[i];
            int _x = p.first;
            int _y = p.second;
            if (_x == x && _y == y)
                return answer;

            if (!isVisited[_x - 1][_y] && _x - 1 >= 0 && zone[_x - 1][_y] == 1)
            {
                isVisited[_x - 1][_y] = true;
                q.push({ _x - 1, _y });
            }
            if (!isVisited[_x + 1][_y] && _x + 1 <= x && zone[_x + 1][_y] == 1)
            {
                isVisited[_x + 1][_y] = true;
                q.push({ _x + 1, _y });
            }
            if (!isVisited[_x][_y - 1] && _y - 1 >= 0 && zone[_x][_y - 1] == 1)
            {
                isVisited[_x][_y - 1] = true;
                q.push({ _x, _y - 1});
            }
            if (!isVisited[_x][_y + 1] && _y + 1 <= y && zone[_x][_y + 1] == 1)
            {
                isVisited[_x][_y + 1] = true;
                q.push({ _x, _y + 1});
            }
        }
    }

    return -1;
}