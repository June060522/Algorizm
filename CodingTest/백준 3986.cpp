#include <iostream>
#include <stack>

using namespace std;
int main()
{
	int repeat = 0;
	int num = 0;
	cin >> repeat;
	string input;
	for (int i = 0; i < repeat; i++)
	{
		stack<char> s;
		cin >> input;
		for (int i = 0; i < input.size(); i++)
		{
			if (!s.empty() && s.top() == input[i])
				s.pop();
			else
				s.push(input[i]);
		}

		if (s.empty())
			num++;
	}
	cout << num;
}