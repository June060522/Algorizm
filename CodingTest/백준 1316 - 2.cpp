#include <iostream>
#include <set>

using namespace std;

int main()
{
	string input;
	int repeat = 0,answer = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		set<char> s;

		s.insert(input[0]);
		for (int i = 1; i < input.length(); i++)
		{
			if (input[i] != input[i - 1])
			{
				if (s.find(input[i]) == s.end())
					s.insert(input[i]);
				else
				{
					answer--;
					break;
				}
			}
		}

		answer++;
	}

	cout << answer;
}