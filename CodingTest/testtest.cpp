#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	cout << fixed;
	cout.precision(1);
	int x, y;
	cin >> x >> y;
	if (x > y)
		swap(x, y);
	int sum = 0, total = 0;
	for (int i = x; i <= y; i++)
	{
		if (i % 5 == 0)
			continue;

		total++;
		sum += i;
	}

	if (sum == 0)
	{
		cout << "0 0.0";
	}
	else
	{
		cout << sum << " " << (double)sum / total;
	}
}