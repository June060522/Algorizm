#include <iostream>

using namespace std;

int arr[15001];
int main()
{
	int n, m, answer = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i] + arr[j] == m)
				answer++;
		}
	}

	cout << answer / 2;
}