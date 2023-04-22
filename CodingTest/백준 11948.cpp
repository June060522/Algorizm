#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	if (a < b)
		swap(a, b);
	if (b < c)
		swap(b, c);
	if (c < d)
		swap(c, d);
	if (e < f)
		swap(e, f);
	cout << a + b + c + e;
}