#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;
	a -= b;
	if (a < 0)
		a *= -1;
	cout << a;
}