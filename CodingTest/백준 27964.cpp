#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<string> s;
	int cnt = 0;
	string input;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		if (input.length() >= 6)
		{
			if (input.substr(input.length()-6, 6) == "Cheese")
				s.insert(input);
		}
	}
	if (s.size() >= 4)
		cout << "yummy";
	else
		cout << "sad";
}