#include <iostream>
using namespace std;
int main()
{
	bool isZero = true;
	string a, b;
	cin >> a >> b;
	if (a.length() > b.length())
		swap(a, b);

	for (int i = 0; i < a.length(); i++)
	{
		b[b.length() - a.length() + i] += a[i] - '0';
	}

	for (int i = b.length() - 1; i >= 0; i--)
	{
		if (b[i] > '1')
		{
			if (i == 0)
			{
				b[i] -= 2;
				cout << 1;
				isZero = false;
			}
			else
			{
				b[i] -= 2;
				b[i - 1]++;
			}
		}
	}
	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] != '0')
			isZero = false;
		if (!isZero)
			cout << b[i];
	}

	if (isZero)
		cout << 0;
}