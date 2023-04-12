#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int repeat = 0;
	bool isTrue = true;
	cin >> repeat;
	string s;
	for (int i = 0; i < repeat; i++)
	{
		isTrue = true;
		stack<char> c;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == ')')
			{
				if (c.empty() || c.top() != '(')
				{
					isTrue = false;
					cout << "NO" << endl;
					break;
				}
				else
					c.pop();
			}
			else
			{
				c.push('(');
			}
		}
		if (isTrue)
		{
			if(c.empty())
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
}