#include <iostream>

using namespace std;

void f(int);
int main()
{
	int n = 0;
	cin >> n;
	f(n);
}

void f(int x)
{
	if (x < 0)
		return;
	cout << x << endl;
	f(x - 1);
}