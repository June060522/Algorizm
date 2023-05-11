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

	if (a * a + b * b == c * c)
	{
		cout << "1";
	}
	else if (a == b && b == c)
	{
		cout << "2";
	}
	else
	{
		cout << "0";
	}
}