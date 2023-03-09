#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	a % 4 == 0 ? a /= 4 : a = a / 4 + 1;

	for (int i = 0; i < a; i++)
		cout << "long ";

	cout << "int";
}