#include <iostream>

using namespace std;

int n;
void f(int);
int main()
{
	cin >> n;
	f(n);
}

void f(int x)
{
	if (x <= 0)
		return;
	cout << x << endl;
	f(x - 1);
}