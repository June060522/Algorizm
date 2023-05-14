#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b;
		a += b / 4;
		a -= b / 7;
		cout << a << '\n';
	}
}