#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	map<string, int> m;
	map <int, string,greater<int>> answer;
	int repeat;
	string s;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> s;
		if (m.find(s) == m.end())
		{
			m.insert(make_pair(s, 1));
		}
		else
		{
			m[s]++;
		}
	}

	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		answer.insert(make_pair(iter->second, iter->first));
	}

	cout << answer.begin()->second;
}