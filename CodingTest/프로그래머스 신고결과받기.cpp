#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    answer.resize(id_list.size());
    map<string, int> count;
    map<string, set<string>> reportmap;
    
    for (size_t i = 0; i < id_list.size(); ++i)
        count[id_list[i]] = 0;

    for (size_t i = 0; i < report.size(); i++)
    {
        string from = report[i].substr(0,report[i].find(" "));
        string to = report[i].substr(report[i].find(" ") + 1, report[i].length());
        reportmap[to].insert(from);
    }

    for (auto i : reportmap)
    {
        if (i.second.size() >= k)
        {
            for (auto j : i.second)
            {
                count[j]++;
            }
        }
    }

    for (auto i : count)
    {
        for (size_t j = 0; j < id_list.size(); j++)
        {
            if (id_list[j] == i.first)
                answer[j] = i.second;
        }
    }
    return answer;
}

int main()
{
    vector <int> v = solution({ "muzi", "frodo", "apeach", "neo" },
        { "muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi" }, 2);
    for (auto i : v)
        cout << i << " ";
    cout << endl;
    
    v = solution({ "con", "ryan" }, { "ryan con", "ryan con", "ryan con", "ryan con" }, 3);
    for (auto i : v)
        cout << i << " ";
}