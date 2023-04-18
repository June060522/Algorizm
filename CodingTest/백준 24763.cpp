#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, input;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		if (i == 0)
			a += input * 6;
		else if (i == 1)
			a += input * 3;
		else if (i == 2)
			a += input * 2;
		else if (i == 3)
			a += input;
		else
			a += input * 2;
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		if (i == 0)
			b += input * 6;
		else if (i == 1)
			b += input * 3;
		else if (i == 2)
			b += input * 2;
		else if (i == 3)
			b += input;
		else
			b += input * 2;
	}

	cout << a << " " << b;
}