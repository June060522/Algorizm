#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	cout << fixed;
	cout.precision(6);
	cout << a * 2 + b * 3.141592 * 2;
}