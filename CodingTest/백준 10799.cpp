#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack <char> s;
	string input = " ";
	int answer = 0;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '(')
		{
			if (input[i + 1] == ')')
			{
				answer += s.size();
				i++;
			}
			else
			{
				answer++;
				s.push('(');
			}
		}
		else
		{
			s.pop();
		}
	}

	cout << answer;
}