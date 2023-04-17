#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	int a, b, c,d;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		d = 1;
		cin >> a >> b >> c;
		while (c > a)
		{
			c -= a;
			d++;
		}
		if (d < 10)
			cout << c << "0" << d << endl;
		else
			cout << c << d << endl;
	}
}