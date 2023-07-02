#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set<string> s;
	string input;
	int member;
	cin >> member;
	for (int i = 0; i < member * 2 - 1; i++)
	{
		cin >> input;
		if (s.find(input) == s.end())
		{
			s.insert(input);
		}
		else
			s.erase(input);
	}

	cout << *s.begin();
}