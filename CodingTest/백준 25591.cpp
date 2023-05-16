#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int c = 100 - a;
	int d = 100 - b;
	int e = 100 - (c + d);
	int f = c * d;
	cout << c << ' ' << d << ' ' << e << ' ' << f << ' ' << f / 100 << ' ' << f % 100 << endl;
	cout << f / 100 + e << ' ' << f % 100;
}