#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	string s;
	cin >> s;
	unordered_set<string> us;

	for (int i = 0; i < s.length(); i++)
	{
		string save = "";
		for (int j = i; j < s.length(); j++)
		{
			save += s[j];
			us.insert(save);
		}
	}

	cout << us.size();
}