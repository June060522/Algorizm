#include <iostream>

using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;

	a = a / 100 * (100 - b);
	if (a >= 100)
		cout << "0";
	else
		cout << "1";
}