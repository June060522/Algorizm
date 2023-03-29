#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int input = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		a += input * input;
	}

	cout << a % 10;
}