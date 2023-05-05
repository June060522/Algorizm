#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int input;
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		if (input == 1)
			a++;
		else
			b++;
	}

	if (a > b)
		cout << 1;
	else
		cout << 2;
}