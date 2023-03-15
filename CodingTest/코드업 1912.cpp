#include <iostream>

using namespace std;

int f(int x);
int main()
{
	int n = 0;
	cin >> n;
	cout << f(n);
}

int f(int x)
{
	if (x <= 1)
		return 1;
	return x * f(x - 1);
}