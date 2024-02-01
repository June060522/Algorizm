#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n,input	;
	map<int, int> m;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		m.insert({ input, i });
	}

	for (auto i : m)
		cout << i.first << " " << i.second << '\n';
}