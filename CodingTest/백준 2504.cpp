#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	stack<string> s;
	char input = ' ';
	int num = 0;
	while (cin >> input)
	{
		if (input == 'a')
			break;

		if (input == ')')
		{
			if (s.top() != "(")
			{
				if (s.top() == "[" || s.top() == "]" || s.top() == "(")
				{
					cout << 0;
					return 0;
				}
				else
				{
					s.pop();
					s.push("2");
				}
			}
			else
			{
				num = stoi(s.top());
				s.pop();
				s.push(to_string(num * 2));
			}
		}
		else if (input == ']')
		{
			if (s.top() != "[")
			{
				if (s.top() == "[" || s.top() == ")" || s.top() == "(")
				{
					cout << 0;
					return 0;
				}
				else
				{
					num = stoi(s.top());
					s.pop();
					s.push(to_string(num * 3));
				}
			}
			else
			{
				s.pop();
				s.push("3");
			}
		}
		else
		{
			s.push(to_string(input));
		}
	}
	cout << s.top() << endl;
}