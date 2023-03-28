#include <iostream>

using namespace std;

int main()
{
	int n, k = 0;
	cin >> n >> k;
	long long int low = 0, middle = 0, high = n * n, answer = 0,ans = n * n;
	while (low <= high)
	{
		middle = (high + low) / 2;
		answer = 0;

		for (int i = 1; i <= n; i++)
		{
			answer += (middle / i < n )? middle / i : n;
		}
		if (answer >= k)
		{
			ans = min(ans,middle);
			low = middle + 1;
		}
		else if(answer < k)
			high = middle - 1;
	}

	cout << ans;
}