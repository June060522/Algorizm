#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001];
int main()
{
	int input,n, m, answer = 100001;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		arr[i] = arr[i - 1] + input;
	}

	int start = 0, end = 1;
	int save = 0;

	while (start != n)
	{
		save = arr[end] - arr[start];

		if (save >= m)
		{
			answer = min(answer, end - start);
			start++;
		}
		else if (save < m)
		{
			if (end == n)
				break;
			end++;
		}
	}


	if (answer == 100001)
		cout << 0;
	else
		cout << answer;
}