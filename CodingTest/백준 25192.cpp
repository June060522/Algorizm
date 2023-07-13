#include <iostream>
#include <set>
using namespace std;

int main()
{
	int repeat = 0;
	int answer = 0;
	set<string> s;
	string input;

	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input == "ENTER")
		{
			s.clear();
		}
		else
		{
			if (s.find(input) == s.end())
			{
				answer++;
				s.insert(input);
			}
		}
	}

	cout << answer;
}