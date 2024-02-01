#include <iostream>

using namespace std;

int main()
{
	int arr[101][101];
	int n, m;
	cin >> n >> m;

	int index = 0;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i % 2 == 0)
			{
				arr[n - j + 1][i] = index++;
			}
			else
			{
				arr[j][i] = index++;
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			cout << arr[i][j] << ' ';
		cout << endl;
	}
}