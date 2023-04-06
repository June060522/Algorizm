#include <iostream>

using namespace std;

int main()
{
	long long int a, b, saveA, saveB;
	long long int namuge = 1;

	cin >> a >> b;
	saveA = a;
	saveB = b;
	namuge = a % b;
	while (namuge != 0)
	{
		a = b;
		b = namuge;
		namuge = a % b;
	}
	cout << (saveA * saveB) / b << endl;
}