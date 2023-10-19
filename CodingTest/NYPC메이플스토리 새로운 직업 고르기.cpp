#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main()
{
	map<string, int> m;
	int num;
	cin >> num;
	string input;
	for (int i = 0; i < num; i++)
	{
		cin >> input;
		m[input] = 1;
	}
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> input;
		m[input]++;
	}

	vector<string> v;
	for (auto i : m)
	{
		if (i.second == 1)
			v.push_back(i.first);
	}
	cout << v.size() << '\n';
	for (auto i : v)
		cout << i << '\n';
}