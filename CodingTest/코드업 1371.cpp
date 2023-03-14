#include <iostream>

using namespace std;

int main()
{
	int n = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			cout << ' ';
		}
		cout << '*';

		for (int j = 0; j < i * 2; j++)
		{
			cout << ' ';
		}
		cout << '*' << endl;
	}

	for (int i = n; i > 0; i--)
	{
		for (int j = n; j > i; j--)
		{
			cout << ' ';
		}
		cout << '*';

		for (int j = 0; j < i * 2 - 2; j++)
		{
			cout << ' ';
		}
		cout << '*' << endl;
	}
}