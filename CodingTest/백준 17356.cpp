#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	cout << (1 / (1 + pow(10, (b - a) / 400 )));
}