#include <iostream>
using namespace std;

int main()
{
	int n, m, i, j, k;
	cin >> n >> m;
	int* arr = new int[n];

	for (int a = 0; a < n; a++)
		arr[a] = 0;

	for (int a = 0; a < m; a++)
	{
		cin >> i >> j >> k;
		while (i <= j)
		{
			arr[i-1] = k;
			i++;
		}
	}

	for (int a = 0; a < n; a++)
		cout << arr[a] << " ";
}