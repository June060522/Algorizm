#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	if (n % 2 == 1)
		n -= 1;

	cout << n / 2;
}