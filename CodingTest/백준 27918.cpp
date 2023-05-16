#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, repeat;
	char c;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> c;
		if (c == 'D')
			a++;
		else
			b++;

		if (a - b == 2 || b - a == 2)
			break;
	}
	cout << a << ":" << b;
}