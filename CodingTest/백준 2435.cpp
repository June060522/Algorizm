#include <iostream>
#include <algorithm>

using namespace std;

int sum[1000001];

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> sum[i];
		sum[i] += sum[i - 1];
	}

	int answer = -1000000;
	int start = 1, end = 0;
	while (start <= n)
	{
		if(start - end == m)
			answer = max(answer, sum[start] - sum[end]);
		start++;
		if (start > m)
			end++;
	}

	cout << answer;
}