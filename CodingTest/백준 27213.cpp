#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a < 3 || b < 3)
		cout << a * b;
	else
		cout << a + a + b + b - 4;

}