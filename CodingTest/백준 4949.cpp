#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	char input;
	string str;
	while (true)
	{
		int i = 0;
		stack<char> s;
		getline(cin, str);
		bool check = false;
		if (str == ".")
			break;

		while (str[i] != '.')
		{
			input = str[i];

			if (check)
			{
				i++;
				continue;
			}

			if (input == '(' || input == '[')
			{
				s.push(input);
			}
			else if (input == ')')
			{
				if (!s.empty() && s.top() == '(')
					s.pop();
				else
					check = true;
			}
			else if (input == ']')
			{
				if (!s.empty() && s.top() == '[')
					s.pop();
				else
					check = true;
			}
			i++;
		}

		if (!s.empty())
			check = true;

		if (check)
			cout << "no" << '\n';
		else
			cout << "yes" << '\n';
	}
}