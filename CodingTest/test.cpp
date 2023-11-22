#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
	unordered_map<string, unordered_set<string>> um;
	vector<pair<string, int>> p;
	vector <int> answer;
	for (size_t i = 0; i < id_list.size(); i++)
		p.push_back({ id_list[i], 0 });

	for (size_t i = 0; i < report.size(); i++)
	{
		string to = report[i].substr(0, report[i].find(' '));
		string from = report[i].substr(report[i].find(' ') + 1);
		um[from].insert(to);
	}

	for (auto a : um)
	{
		if (a.second.size() >= k)
		{
			for (int i = 0; i < p.size(); i++)
			{
				if (a.second.find(p[i].first) != a.second.end())
				{
					p[i].second++;
				}
			}
		}
	}
	for (auto i : p)
		answer.push_back(i.second);
	return answer;
}