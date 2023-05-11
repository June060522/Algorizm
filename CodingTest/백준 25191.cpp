#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	b /= 2;
	cout << min(a, b + c);
}