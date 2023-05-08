#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int e = a + d;
	int f = b + c;
	cout << min(e, f);
}