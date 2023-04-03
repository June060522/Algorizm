#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b, v;
	int print = 0;
	cin >> a >> b >> v;
	int day = a - b;
	int dmax = v - a;

	print = dmax / day;
	cout << ++print;
}