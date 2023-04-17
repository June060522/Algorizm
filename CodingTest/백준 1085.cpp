#include <iostream>

using namespace std;

int main()
{
	int x, y, ix, iy, a, b,minV;
	cin >> x >> y >> ix >> iy;
	a = ix - x;
	b = iy - y;

	minV = a;
	if (minV > b)
		minV = b;
	if (minV > x)
		minV = x;
	if (minV > y)
		minV = y;
	cout << minV;
}