#include <iostream>

using namespace std;

int main()
{
	int input;
	int a, b;
	cin >> input;
	if (input % 10 == 0)
	{
		a = 10;
		b = input / 100;

	}
	else
	{
		a = input % 10;
		b = input / 10;
	}
	cout << a + b;
}