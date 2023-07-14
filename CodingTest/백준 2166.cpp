#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<long double> x;
vector<long double> y;
int main()
{
	int size = 0;
	cin >> size;
	long double inputX;
	long double inputY;
	long double area = 0;
	for (int i = 0; i < size; i++)
	{
		cin >> inputX >> inputY;
		x.push_back(inputX);
		y.push_back(inputY);
	}
	long double neajuck1X;
	long double neajuck1Y;
	long double neajuck1Length;
	long double neajuck2X;
	long double neajuck2Y;
	long double neajuck2Length;
	for (int i = 1; i < size - 1; i++)
	{
		neajuck1X = x[i] - x[0];
		neajuck1Y = y[i] - y[0];

		neajuck2X = x[i + 1] - x[0];
		neajuck2Y = y[i + 1] - y[0];

		area += (neajuck1X * neajuck2Y - neajuck1Y * neajuck2X )/ 2;
	}
	cout << fixed;
	cout.precision(1);
	if (area < 0)
		area *= -1;
	cout << area;
}