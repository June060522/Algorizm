#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

map<string, int> _stoi;
map<int, string> _itos;
int idx = 0;
int _left;

vector<int> nodes[10001];
bool isCompelete = false;

vector<string> answer;
void Bfs(int deep, int x, vector<int> _nodes[10001])
{
    if (isCompelete)
        return;

    if (deep == _left)
        isCompelete = true;
    else
    {
        for (int i = 0; i < _nodes[x].size(); i++)
        {
            int temp = _nodes[x][i];
            answer[deep] = _itos[temp];
            _nodes[x].erase(_nodes[x].begin() + i);
            Bfs(deep + 1, temp, _nodes);
            _nodes[x].insert(_nodes[x].begin() + i, temp);
            if (isCompelete)
                return;
        }
    }

}

vector<string> solution(vector<vector<string>> tickets) {
    _left = tickets.size() + 1;
    answer.resize(_left);

    sort(tickets.begin(), tickets.end());

    for (int i = 0; i < tickets.size(); i++)
    {
        if (_stoi.find(tickets[i][0]) == _stoi.end())
        {
            _stoi[tickets[i][0]] = idx;
            _itos[idx++] = tickets[i][0];
        }
        if (_stoi.find(tickets[i][1]) == _stoi.end())
        {
            _stoi[tickets[i][1]] = idx;
            _itos[idx++] = tickets[i][1];
        }
        nodes[_stoi[tickets[i][0]]].push_back(_stoi[tickets[i][1]]);
    }

    int x = _stoi["ICN"];
    int tempVal = 0;
    answer[0] = _itos[x];
    Bfs(1, x, nodes);

    return answer;
}