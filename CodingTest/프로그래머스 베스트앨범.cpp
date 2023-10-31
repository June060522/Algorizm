#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;                                 // 답을 담을 배열
    unordered_map<string, vector<pair<int, int>>> m;    // 장르별로 각각 플레이수(key: 장르, value: 플레이수, 고유 ID)
    unordered_map<string, int> totalPlay;               // 장르내의 재생된 횟수(key: 장르, value: 횟수)
    for (size_t i = 0; i < genres.size(); ++i)          // 많이 재생된 장르와 노래를 찾기 위해 map에 저장
    {
        m[genres[i]].push_back({plays[i],i});
        totalPlay[genres[i]] += plays[i];
    }

    vector<pair<int, string>> vec;                      //플레이 횟수를 기준 정렬
    for (auto i : totalPlay)
        vec.push_back({ i.second ,i.first });
    sort(vec.begin(), vec.end(), greater<>());

    for (auto i : vec)                                  // 플레이 순으로 출력
    {
        sort(m[i.second].begin(), m[i.second].end(),greater<>());   // 장르내의 플레이 횟수를 기준으로 내림차순 정렬
        if (m[i.second].size() > 1)
        {
            if (m[i.second][0].first == m[i.second][1].first &&     // 값이 같으면 고유번호가 낮은 것이 앞으로
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