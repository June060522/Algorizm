#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	if (num % 8 == 1)
		cout << 'a';
	else if (num % 8 == 2)
		cout << 'b';
	else if (num % 8 == 3)
		cout << 'c';
	else if (num % 8 == 4)
		cout << 'd';
	else if (num % 8 == 5)
		cout << 'e';
	else if (num % 8 == 6)
		cout << 'f';
	else if (num % 8 == 7)
		cout << 'g';
	else if (num % 8 == 0)
		cout << 'h';
	int idx = 1;

	while (num > 8)
	{
		idx++;
		num -= 8;
	}

	cout << idx;
}