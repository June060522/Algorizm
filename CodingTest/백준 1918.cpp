#include <iostream>
#include <stack>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	stack<char> s;
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '+' || input[i] == '-')
		{
			while (!s.empty() && s.top() != '(')
			{
				cout << s.top();
				s.pop();
			}
			s.push(input[i]);
		}
		else if (input[i] == '*' || input[i] == '/')
		{
			while (!s.empty() && (s.top() == '*' || s.top() == '/'))
			{
				cout << s.top();
				s.pop();
			}
			s.push(input[i]);
		}
		else if (input[i] == '(')
		{
			s.push(input[i]);
		}
		else if (input[i] == ')')
		{
			while (s.top() != '(')
			{
				cout << s.top();
				s.pop();
			}
			s.pop();
		}
		else
		{
			cout << input[i];
		}
	}

	while(!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}