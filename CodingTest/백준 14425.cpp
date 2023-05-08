#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<string> s;
	int m, n;
	string input = "";
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		s.insert(input);
	}
	int cnt = 0;
	for (int j = 0; j < n; j++)
	{
		cin >> input;
		if (s.find(input) != s.end())
			cnt++;
	}
	cout << cnt;
}