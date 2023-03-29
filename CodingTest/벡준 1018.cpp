#include <iostream>

using namespace std;
char arr[51][51];
int main()
{
	int m = 0, n = 0, cnt = 0, imax = 9999;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	int k = m - 8, l = n - 8;
	for (int q = 0; q <= k; q++)
	{
		for (int r = 0; r <= l; r++)
		{
			for (int i = q; i < q + 8; i++)
			{
				for (int j = ((i + 1) % 2) + r; j < r + 8; j += 2)
				{
					if (arr[i][j] != 'W')
						cnt++;
				}
			}

			for (int i = q; i < q + 8; i++)
			{
				for (int j = (i % 2) + r; j < r + 8; j += 2)
				{
					if (arr[i][j] != 'B')
						cnt++;
				}
			}

			if (imax > cnt)
				imax = cnt;
			cnt = 0;

			for (int i = q; i < q + 8; i++)
			{
				for (int j = (i + 1) % 2 + r; j < r + 8; j += 2)
				{
					if (arr[i][j] != 'B')
						cnt++;
				}
			}

			for (int i = q; i < q + 8; i++)
			{
				for (int j = i % 2 + r; j < r + 8; j += 2)
				{
					if (arr[i][j] != 'W')
						cnt++;
				}
			}
			if (imax > cnt)
				imax = cnt;
			cnt = 0;
		}
	}
	cout << imax;
}