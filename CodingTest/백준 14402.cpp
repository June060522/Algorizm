#include <iostream>
#include <set>

using namespace std;

int main()
{
	multiset<string> s;
	int answer = 0;
	int cnt = 0;
	string input, plus;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> input >> plus;
		if (plus == "-")
		{
			if (s.find(input) == s.end())
			{
				answer++;
			}
			else
			{
				s.erase(s.find(input));
			}
		}
		else
		{
			s.insert(input);
		}
	}


	answer += s.size();

	cout << answer;
}