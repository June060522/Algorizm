#include <iostream>
#include <map>

using namespace std;

int main()
{
	int repeat;
	string input;
	map<string, int> m;
	multimap<int, string,greater<int>> answer;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		m.insert(make_pair(input, 0));
	}
	while (cin >> input)
	{
		m[input]++;
	}

	map<string, int>::iterator iter = m.begin();
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		answer.insert(make_pair(iter->second, iter->first));
	}

	map<int, string>::iterator iter2 = answer.begin();

	for (iter2 = answer.begin(); iter2 != answer.end(); iter2++)
	{
		cout << iter2->second << " " << iter2->first << '\n';
	}
}