#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int o;
	int x;
	o = b;
	x = a - b;
	o = min(o,c);
	x = min(x, a - c);
	cout << o + x;
}