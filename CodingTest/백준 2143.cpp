#include <iostream>

using namespace std;

bool arr[4000001];
int sumArr[4000001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int answer = 0;
	int n;
	cin >> n;
	int idx = 1;
	for (int i = 2; i <= n; i++)
	{
		if (!arr[i])
		{
			sumArr[idx++] = i + sumArr[idx - 1];
			for (int j = i; j <= n; j += i)
				arr[j] = true;
		}
	}

	int start = 0, end = 1, val;

	while (end < idx)
	{
		val = sumArr[end] - sumArr[start];


		if (val < n)
		{
			end++;
		}
		else if (val > n)
		{
			start++;
		}
		else
		{
			answer++;
			start++;
		}
	}

	cout << answer;
}