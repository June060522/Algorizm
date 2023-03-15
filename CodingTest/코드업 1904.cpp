#include <iostream>

using namespace std;

void f(int x);
int imin;
int imax;
int main()
{
	cin >> imin >> imax;
	f(imin);
}

void f(int x)
{
	if (x > imax)
		return;
	if (x % 2 != 0)
		cout << x << ' ';
	f(x + 1);
}