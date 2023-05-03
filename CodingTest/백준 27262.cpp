#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	a--;
	b--;
	cout << b * d + a * d << " " << a * c;
}