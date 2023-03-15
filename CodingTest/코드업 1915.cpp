#include <iostream>

using namespace std;

int n;
int f(int x);
int main()
{
	cin >> n;
	cout << f(n);
}

int f(int x)
{
	if (x == 1 || x == 2)
		return 1;

	return f(x - 1) + f(x - 2);
}