#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	double input;
	cin >> input;
	input = sqrt(input);

	cout << fixed;
	cout.precision(8);
	cout << input * 4;
}