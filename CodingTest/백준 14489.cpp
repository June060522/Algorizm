#include <iostream>
using namespace std;
int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	a += b;
	c *= 2;
	if (a >= c)
		cout << a - c;
	else
		cout << a;
}