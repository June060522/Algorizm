#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		for (int j = 0; j < repeat * 2; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			else
			{
				if (j % 2 == 0)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
		}
		cout << endl;
	}
}