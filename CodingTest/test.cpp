#include <iostream>

using namespace std;

bool test()
{
	bool a = false;
	if (a)
		return false;

	if (rand() % 2 == 0)
		a = true;
	else
		a = false;
}

int main()
{
	srand((unsigned int)time(NULL));
	int a = 0, b = 0;
	for (int i = 0; i < 10000000; i++)
	{
		if (test())
			a++;
		else
			b++;
	}
	cout << a << endl << b;
}