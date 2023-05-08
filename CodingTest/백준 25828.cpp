#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int d = b * c + a;
	int f = a * b;
	if (d > f)cout << 1;
	else if (d < f)cout << 2;
	else cout << 0;
}