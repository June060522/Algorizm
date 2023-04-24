#include <iostream>
using namespace std;
int main()
{
	long long x, y, z;
	cin >> x >> y;
	int low = 1, middle = 0, high = x;
	z = (y * 100 / x);

	while (low < high)
	{
		middle = (high + low) / 2;
		if (z == (((y + middle) * 100) / (x + middle)))
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}
	if (z == (((y + middle) * 100) / (x + middle)))
	{
		++middle;
		if(z == (((y + middle) * 100) / (x + middle)))
			cout << -1;
		else
			cout << middle;

	}
	else
		cout << middle;

}