#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	string inputStr;
	int cnt = 0;
	int repeat = 0;
	int n = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		map<string, int> m;
		cin >> n;
		cnt = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> inputStr;
			cin >> inputStr;
			if (m.find(inputStr) == m.end())
			{
				m.insert(make_pair(inputStr, 2));
			}
			else
			{
				++m[inputStr];
			}
		}
		while (!m.empty())
		{
			cnt *= m.begin()->second;
			m.erase(m.begin());
		}
		cout << cnt - 1 << '\n';
	}
}