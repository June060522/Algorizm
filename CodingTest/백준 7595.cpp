#include <iostream>

using namespace std;

int main()
{
	int input = 1;
	while (true)
	{
		cin >> input;
		if (input == 0)
			return 0;

		for (int i = 1; i <= input; i++)
		{
			for (int j = 0; j < i; j++)
				cout << '*';

			cout << endl;
		}
	}
}