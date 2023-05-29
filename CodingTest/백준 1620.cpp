#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	unordered_map<string, int> m;
	unordered_map<int, string> m2;
	int repeat,repeat2;
	cin >> repeat >> repeat2;
	string input;
	for (int i = 1; i <= repeat; i++)
	{
		cin >> input;
		m.insert(make_pair(input, i));
		m2.insert(make_pair(i, input));
	}

	for (int i = 0; i < repeat2; i++)
	{
		cin >> input;
		if (m.find(input) == m.end())
		{
			int a = stoi(input);
			cout << m2[a] << '\n';
		}
		else
		{
			cout << m[input] << '\n';
		}
	}
}