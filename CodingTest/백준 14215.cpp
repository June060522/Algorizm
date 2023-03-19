#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b)
		swap(a, b);
	if (b > c)
		swap(b, c);

	if (c >= a + b)
		c = a + b - 1;
	cout << a + b + c;
}