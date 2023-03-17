#include <iostream>

using namespace std;

bool f(int a);
int cnt = 0;
int main()
{
	int iii = -1;
	int num = 0;
	cin >> num;
	do
	{
		iii++;
		if (f(iii))
			cnt++;
	} while (num != cnt);
	cout << iii;
}

bool f(int a)
{
	int b[8] = { 0 };
	int k = 0;
	for (int i = 0; a > 0; i++)
	{
		b[i] = a % 10;
		a /= 10;
		k++;
	}
	while (k > 0)
	{
		if (b[k] < b[k - 1])
			return false;
		k--;
	}
	return true;
}