#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	int saveA = num1 * num2;
	int namuge = num1 % num2;
	while (namuge != 0)
	{
		num1 = num2;
		num2 = namuge;
		namuge = num1 % num2;
	}
	cout << num2 << "\n" << saveA / num2;
}