#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<char> s;
	char input = ' ';
	int cnt = 0;
	while (cin >> input)
	{
		if (input == 'a')
			break;
		if (input == ')')
		{
			if(s.top() != '(')

			s.pop();
			s.push('2');
		}
		else if (input == ']')
		{
			if(s.top() != '[')
			s.pop();
			s.push('3');
		}
		else
		{
			s.push(input);
		}
	}
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
}