#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	for (int i = repeat; i > 0; i--)
	{
		for (int j = i; j < repeat; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i * 2 -1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 2; i <= repeat ; i++)
	{
		for (int j = i; j < repeat; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i * 2 - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}