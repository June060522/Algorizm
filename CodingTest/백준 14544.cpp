#include <iostream>
#include <map>

using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		map<string, int> m;
		int member, vote;
		string name;
		int cnt;
		string temp;
		cin >> member >> vote;
		for (int j = 0; j < member; j++)
		{
			cin >> name;
			m.insert(make_pair(name, 0));
		}

		for (int j = 0; j < vote; j++)
		{
			cin >> name >> cnt >> temp;
			for (auto k : m)
			{
				if (k.first == name)
					k.second += cnt;
			}
		}

		cout << "Vote " << i + 1 << ": The " << '/n';
	}
}