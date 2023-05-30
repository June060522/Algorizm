#include <iostream>
#include <string>
#include <map>

using namespace std;

string s[500001];
int main()
{
	int repeat1, repeat2;
	cin >> repeat1 >> repeat2;
	map<string, int> answer;
	string input;
	for (int i = 0; i < repeat1; i++)
	{
		cin >> input;
		s[i] = input;
	}

	for (int i = 0; i < repeat2; i++)
	{
		cin >> input;
		if (s->find(input) != string::npos)
		{
			answer.insert(make_pair(input, i));
		}
	}
	cout << answer.size() << '\n';
	for (auto i : answer)
		cout << i.first << '\n';
}