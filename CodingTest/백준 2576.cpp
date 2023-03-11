#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int min = 0;
	int input = 0;

	for (int i = 0; i < 7; i++)
	{
		cin >> input;

		if (input % 2 == 1)
		{
			if (min == 0)
				min = input;
			sum += input;
			if (min > input)
				min = input;
		}
	}

	if (sum == 0)
		cout << -1;
	else
		cout << sum << endl << min;
}