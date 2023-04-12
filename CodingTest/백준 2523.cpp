#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}


	for (int i = 0; i < a; i++)
	{
		for (int j = i; j < a; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
