#include <iostream>
#include <set>

using namespace std;

int main()
{
	string input;
	int repeat = 0;
	int inputrepeat = 0;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		set<string> s;
		cin >> inputrepeat;
		for (int j = 0; j < inputrepeat; j++)
		{
			cin >> input;
			s.insert(input);
		}
		cout << s.size() << '\n';
	}
}