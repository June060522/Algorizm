#include <iostream>

using namespace std;

int main()
{
	int a, b;
	do
	{
		cin >> a >> b;
		if (a + b == 0)
			continue;

		cout << a + b << endl;
	} while (a + b != 0);
}