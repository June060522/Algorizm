#include <iostream>

using namespace std;

int main()
{
	long long int n, k = 0;
	cin >> n >> k;
	long long int low = 0, middle = 0, high = n * n, answer = 0;
	while (low < high)
	{
		middle = (high + low) / 2;
		answer = 0;

		for (int i = 1; i <= n; i++)
		{
			answer += min(n , middle/i);
		}
		if (answer < k)
		{
			low = middle + 1;
		}
		else
			high = middle;
	}

	cout << low;
}