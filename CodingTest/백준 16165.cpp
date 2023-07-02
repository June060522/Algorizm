#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap<string, string>m1;
	int groups;
	int problems;
	int members;
	int onetwo;
	string team;
	string name;
	cin >> groups >> problems;
	for (int i = 0; i < groups; i++)
	{
		cin >> team >> members;
		for (int j = 0; j < members; j++)
		{
			cin >> name;
			m1.insert(make_pair(name,team));
		}
	}

	for (int i = 0; i < problems; i++)
	{
		cin >> name >> onetwo;
		if (onetwo == 0)
		{
			for (auto j : m1)
			{
				if (j.second == name)
					cout << j.first << '\n';
			}
		}
		else
		{
			for (auto j : m1)
				if(j.first == name)
					cout << j.second << '\n';
		}
	}
}