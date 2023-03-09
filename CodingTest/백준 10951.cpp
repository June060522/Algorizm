#include <iostream>

using namespace std;

int main()
{
	int a, b;
	do
	{
		a = 0;
		b = 0;
		cin >> a >> b;
		if (a + b > 0)
		{
			cout << a + b << endl;
		}
	} while (a + b != 0);
}