#include <iostream>
#include <algorithm>

using namespace std;

long long int arr[1000001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long int n = 0, k = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	long long int low = 0, middle, high = arr[n - 1], lengthSum = 0, ans = 0;
	while (low <= high)
	{
		lengthSum = 0;
		middle = (high + low) / 2;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] - middle > 0)
			{
				lengthSum += arr[i] - middle;
			}
		}

		if (lengthSum >= k)
		{
			if (ans < middle)
				ans = middle;
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}
	cout << ans;
}