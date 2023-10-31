#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;                                 // ���� ���� �迭
    unordered_map<string, vector<pair<int, int>>> m;    // �帣���� ���� �÷��̼�(key: �帣, value: �÷��̼�, ���� ID)
    unordered_map<string, int> totalPlay;               // �帣���� ����� Ƚ��(key: �帣, value: Ƚ��)
    for (size_t i = 0; i < genres.size(); ++i)          // ���� ����� �帣�� �뷡�� ã�� ���� map�� ����
    {
        m[genres[i]].push_back({plays[i],i});
        totalPlay[genres[i]] += plays[i];
    }

    vector<pair<int, string>> vec;                      //�÷��� Ƚ���� ���� ����
    for (auto i : totalPlay)
        vec.push_back({ i.second ,i.first });
    sort(vec.begin(), vec.end(), greater<>());

    for (auto i : vec)                                  // �÷��� ������ ���
    {
        sort(m[i.second].begin(), m[i.second].end(),greater<>());   // �帣���� �÷��� Ƚ���� �������� �������� ����
        if (m[i.second].size() > 1)
        {
            if (m[i.second][0].first == m[i.second][1].first &&     // ���� ������ ������ȣ�� ���� ���� ������
                m[i.second][0].second > m[i.second][1].second)
            {
                swap(m[i.second][0], m[i.second][1]);
            }
            answer.push_back(m[i.second][0].second);
            answer.push_back(m[i.second][1].second);
        }
        else
        {
            answer.push_back(m[i.second][0].second);
        }
    }
    return answer;
}