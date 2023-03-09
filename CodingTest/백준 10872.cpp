#include <iostream>

using namespace std;

int F(int num)
{
	if (num == 0)
		num = 1;

	if (num > 1)
		return num *= F(num - 1);
	else
		return num;
}
int main()
{
	int a;
	cin >> a;
	cout << F(a);
}
