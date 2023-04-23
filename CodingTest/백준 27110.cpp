#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a;
	int b, c, d;
	cin >> a >> b >> c >> d;
	cout << min(a, b) + min(a, c) + min(a, d);
}