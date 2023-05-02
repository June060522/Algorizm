#include <iostream>

using namespace std;

int main()
{
	int num;
	int a;
	cin >> num;
	if (num <= 5)
	{
		cout << num;
	}
	else
	{
		num -= 5;
		a = num / 4;
		num %= 4;
		if (a % 2 == 1)
		{
			cout << num + 1;
		}
		else
		{
			cout << 5 - num;
		}
	}
}