#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		for (int j = repeat - 1; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++)
			cout << "*";

		cout << endl;
	}
}