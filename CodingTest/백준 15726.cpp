#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long a, b, c;
	cin >> a >> b >> c;
	cout << max(a * b / c, a * c / b);
}