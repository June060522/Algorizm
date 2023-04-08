#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	for (int i = repeat; i > 0; i--)
	{
		for (int j = repeat; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j < i * 2 - 1; j++)
			cout << "*";

		cout << endl;
	}
}