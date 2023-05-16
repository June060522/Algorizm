#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << fixed;
	cout.precision(8);
	double a;
	cin >> a;
	a = sqrt(a);
	cout << a * 4;
}