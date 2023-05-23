#include <iostream>
using namespace std;
int main()
{
	int repeat;
	cin >> repeat;
	int x, y;
	for (int i = 0; i < repeat; i++)
	{
		cin >> x >> y;
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{
				cout << "X";
			}
			cout << '\n';
		}
		cout << '\n';
	}
}