#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (b > c)
		cout << "Subway";
	else if (b < c)
		cout << "Bus";
	else
		cout << "Anything";
}