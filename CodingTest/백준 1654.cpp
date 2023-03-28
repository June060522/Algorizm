#include <iostream>
#include <algorithm>

using namespace std;

long long input = 0;
long long cnt = 0;
long long arr[10001];
long long tree(long long);
int main()
{
	long long totalCnt = 0;
	cin >> input >> cnt;
	for (long long i = 0;i < input; i++)
		cin >> arr[i];
	
	sort(arr, arr + input);

	long long high = arr[input - 1];
	long long low = 1;
	long long mid = 0;
	long long ans = 1;
	while (low <= high)
	{
		mid = (high + low) / 2;
		totalCnt = tree(mid);

		if (totalCnt >= cnt)
		{
			low = mid + 1;
			ans = max(ans, mid);
		}
		else if(totalCnt < cnt)
		{
			high = mid - 1;
		}
	}
	mid = (high + low) / 2;
	cout << ans;
}

long long tree(long long input1)
{
	long long sum = 0;
	for (long long i = 0; i < input; i++)
		sum += arr[i] / input1;
	return sum;
}