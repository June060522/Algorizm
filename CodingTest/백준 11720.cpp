#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	char input = ' ';
	cin >> repeat;
	int sum = 0;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		sum += (int)input - 48;
	}

	cout << sum;
}