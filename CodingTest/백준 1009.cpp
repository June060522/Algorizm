#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	int x = 0, y = 0,sum = 0;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> x>> y;
		x %= 10;
		y -= 1;
		sum = x;
		while (y > 0)
		{
			sum *= x;
			y--;
			sum %= 10;
		}

		if (sum == 0)
			cout << "10" << endl;
		else
			cout << sum << endl;
	}
}