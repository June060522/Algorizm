#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

		for (int j = i * 2; j < a * 2; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = a-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

		for (int j = i * 2; j < a * 2; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
