#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = i + 1; j < a; j++)
		{
			cout << " ";
		}

		cout << "*";
		if (i == 0)
		{
			cout << endl;
			continue;
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			cout << " ";
		}

		cout << "*";

		cout << endl;
	}
}