#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		a *= 2;
		b += 10;
	}
	else
	{
		a += 10;
		b *= 2;
	}
	cout << a << ' ' << b;
}