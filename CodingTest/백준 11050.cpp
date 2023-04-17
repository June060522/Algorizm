#include <iostream>

using namespace std;

void F(int, int);

int cnt = 0;

int main()
{
	int a, b;
	cin >> a >> b;
	F(a, b);
	cout << ++cnt;
}

void F(int a, int b)
{
	if (b == 0 || a == b)
		return;
	cnt++;
	F(a - 1, b);
	F(a - 1, b - 1);
}