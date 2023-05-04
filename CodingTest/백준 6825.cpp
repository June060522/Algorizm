#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	double c = a / (b * b);
	if (c < 18.5f)
		cout << "Underweight";
	else if (c <= 25)
		cout << "Normal weight";
	else
		cout << "Overweight";
}