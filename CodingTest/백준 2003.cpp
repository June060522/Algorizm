#include <iostream>

using namespace std;

int arr[30001];
int main()
{
	int n, m, input,answer = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		arr[i] = arr[i - 1] + input;
;	}

	int start = 0,end = 1;
	int val = 0;
	while (end <= n)
	{
		val = arr[end] - arr[start];
		if (val == m)
		{
			answer++;
			start++;
		}
		else if (val < m)
		{
			end++;
		}
		else
		{
			start++;
		}
	}

	cout << answer;
}