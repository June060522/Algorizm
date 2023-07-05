#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string,int>m;
	map<int,string>m2;

	int answer = 0;
	int repeat = 0;
	string input;

	cin >> answer >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> input;

		if (m.find(input) != m.end())
		{
			m.erase(input);
		}

		m.insert(make_pair(input,i));
	}

	for (auto i : m)
	{
		m2.insert(make_pair(i.second, i.first));
	}

	for (auto i : m2)
	{
		if (answer <= 0)
			break;

		cout << i.second << '\n';

		answer--;
	}
}