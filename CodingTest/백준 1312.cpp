#include <iostream>

using namespace std;

int main()
{
	int a, b, c, avg,answer = 0;
	cin >> a >> b >> c;
	a %= b;
	for (int i = 0; i < c; i++)
	{
		a *= 10;
		answer = a / b;
		a %= b;
	}

	cout << answer;
}