#include <iostream>

using namespace std;

int main()
{
	int a, b, max = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> a >> b;
		if (max < a * b)
		{
			max = a * b;
		}
	}

	cout << max;
}