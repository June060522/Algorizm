#include <iostream>

using namespace std;

long long num[100001];
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
		num[i] += num[i - 1];
	}

	int start = 0, end = 1;
	long long val = 0;
	long long answer = 0;

	while (end <= n)
	{
		val = num[end] - num[start];
		answer = max(answer, val);
		end++;
		if (end > m)
			start++;
	}

	cout << answer;
}