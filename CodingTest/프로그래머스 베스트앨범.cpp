#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, vector<pair<int, int>>,greater<>> m;
    map<string, int> totalPlay;
    for (size_t i = 0; i < genres.size(); ++i)
    {
        m[genres[i]].push_back({plays[i],i});
        totalPlay[genres[i]] += plays[i];
    }
    vector<pair<int, string>> vec;
    for (auto i : totalPlay)
    {
        vec.push_back({ i.second ,i.first });
    }
    sort(vec.begin(), vec.end(), greater<>());
    for (auto i : vec)
    {
        sort(m[i.second].begin(), m[i.second].end(),greater<>());
        int a = m[i.second][0].second;
        if (m[i.second].size() > 1)
        {
            int b = m[i.second][1].second;
            if (m[i.second][0].first == m[i.second][1].first && a > b)
            {
                swap(a, b);
            }

            answer.push_back(a);
            answer.push_back(b);
        }
        else
        {
            answer.push_back(a);
        }
    }
    return answer;
}

int main()
{
    vector<int> v = solution({ "rap","pop", "pop", "rap" }, { 55, 50, 50, 55});
    for (int i = 0; i < v.size(); i++)
        cout << v[i];
}