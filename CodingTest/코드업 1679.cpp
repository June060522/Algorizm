#include <iostream>

using namespace std;

int main()
{
	bool print = false;
	int input = 0;
	int k = 0;
	cin >> input;
	for (int i = 1; i < input; i++)
	{
		for (int j = i; j < input - i; j++)
		{
			k = input - i - j;
			if (k < i + j && k >= j)
			{
				cout << i << " " << j << " " << k << "\n";
				print = true;
			}
		}
	}

	if (!print)
		cout << "-1";
}
