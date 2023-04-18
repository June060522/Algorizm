#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int input = 0;
	for (int i = 0; i < 6; i++)
	{
		cin >> input;
		sum += input;
	}

	cout << sum * 5;
}