#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	int a, b, saveA, saveB;
	int namuge = 1;
	for (int i = 0; i < repeat; i++)
	{
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
}