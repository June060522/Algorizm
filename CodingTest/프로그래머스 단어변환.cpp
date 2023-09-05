#include<iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>

using namespace std;

bool CanChange(string a, string b)
{
    int cnt = 0;
    if (a.length() == b.length())
    {
        for (size_t i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
                cnt++;
        }
        if (cnt == 1)
            return true;
    }
    return false;

}
bool isVisted[51];
vector<int> v[51];

int solution(string begin, string target, vector<string> words) {
    map<string, int>m;
    queue<int> q;
    
    words.push_back(begin);
    for (int i = 0; i < words.size(); i++)
        m[words[i]] = i + 1;
    
    int startNode = m[begin];
    int endNode = m[target];
    int answer = 0;
    
    for (size_t i = 0; i < words.size(); i++)
    {
        for (size_t j = i + 1; j < words.size(); j++)
        {
            if (CanChange(words[i], words[j]))
            {
                v[m[words[i]]].push_back(m[words[j]]);
                v[m[words[j]]].push_back(m[words[i]]);
            }
        }
    }

    q.push(startNode);
    isVisted[startNode] = true;

    while (!q.empty())
    {
        answer++;
        vector<int>nodes;
        while (!q.empty())
        {
            nodes.push_back(q.front());
            q.pop();
        }

        for (size_t i = 0; i < nodes.size(); i++)
        {
            for (size_t j = 0; j < v[nodes[i]].size(); j++)
            {
                if (!isVisted[v[nodes[i]][j]])
                {
                    if (v[nodes[i]][j] == endNode)
                        return answer;
                    isVisted[v[nodes[i]][j]] = true;
                    q.push(v[nodes[i]][j]);
                }
            }
        }

    }

    return 0;
}

int main()
{
    cout << solution("hit", "cog", { "hot", "dot", "dog", "lot", "log", "cog" });
}