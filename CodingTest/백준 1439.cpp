#include <iostream>

using namespace std;

int main()
{
	int one = 0;
	int zero = 0;
	string input;
	cin >> input;

	char curChar = ' ';
	for (int i = 0; i < input.length(); i++)
	{
		if (curChar != input[i])
		{
			if (input[i] == '1')
				one++;
			else
				zero++;

			curChar = input[i];
		}
	}

	cout << min(one, zero);
}