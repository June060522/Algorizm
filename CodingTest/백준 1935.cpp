#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	stack <double> s;
	int c[26];
	string input;
	int iInput;
	double temp,temp1;
	int size = 0;
	cin >> size;
	cin >> input;
	for (int i = 0; i < size; i++)
	{
		cin >> iInput;
		c[i] = iInput;
	}
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			s.push(c[input[i] - 'A']);
		}
		else
		{
			temp = s.top();
			s.pop();
			temp1 = s.top();
			s.pop();
			if (input[i] == '+')
				s.push(temp1 + temp);
			else if (input[i] == '-')
				s.push(temp1 - temp);
			else if (input[i] == '*')
				s.push(temp1 * temp);
			else if (input[i] == '/')
				s.push(temp1 / temp);
		}
	}

	cout << fixed;
	cout.precision(2);
	cout << s.top();
}