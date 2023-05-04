#include <iostream>

using namespace std;

int main()
{
	double a = -1, b = -1;
	while (a != 0 || b != 0)
	{
		cin >> a >> b;
		if (a == 0 || b == 0)
			cout << "AXIS";
		else if (a > 0)
		{
			if (b > 0)
				cout << "Q1";
			else
				cout << "Q4";
		}
		else
		{
			if (b > 0)
				cout << "Q2";
			else
				cout << "Q3";
		}
		cout << '\n';
	}
}