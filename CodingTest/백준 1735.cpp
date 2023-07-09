#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	int top,down;
	int a, b, c, d, saveA, saveB;
	int namuge = 1;
	cin >> a >> b >> c >> d;

	saveA = b;
	saveB = d;
	namuge = b % d;
	while (namuge != 0)
	{
		b = d;
		d = namuge;
		namuge = b % d;
	}
	down = (saveA * saveB) / d;
	top = (a * (down / saveA)) + (c * (down / saveB));

	saveA = down;
	saveB = top;
	namuge = down % top;
	while (namuge != 0)
	{
		saveA = saveB;
		saveB = namuge;
		namuge = saveA % saveB;
	}
	cout << top / saveB << " " << down / saveB;
}