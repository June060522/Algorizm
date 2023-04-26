#include <iostream>
using namespace std;
int main()
{
	unsigned long long int a, b;
	cin >> a >> b;
	a /= 100;
	a *= 100;
	for (int i = 0; i < 100; i++)
	{
		a /= 100;
		a *= 100;
		a += i;
		if (a % b == 0)
		{
			if (i < 10)
				cout << 0;

			cout << i;
			return 0;
		}
	}
}