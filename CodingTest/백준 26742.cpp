#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0;
	char input;
	while (cin >> input)
	{
		if (input == 'B')
			a++;
		else
			b++;
	}
	a /= 2;
	b /= 2;
	cout << a + b;
}