#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b + c >= 100)
	{
		cout << "OK";
	}
	else
	{
		if (a > b)
		{
			if (b > c)
			{
				cout << "Hanyang";
			}
			else
			{
				cout << "Korea";
			}
		}
		else
		{
			if (a > c)
			{
				cout << "Hanyang";
			}
			else
			{
				cout << "Soongsil";
			}
		}
	}
}