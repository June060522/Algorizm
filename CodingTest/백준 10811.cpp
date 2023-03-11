#include <iostream>

using namespace std;

int main()
{
	int n, m, i, j,temp;
	cin >> n >> m;
	int* arr = new int[n];
	int* afterArr = new int[n];

	for (int a = 0; a < n; a++)
	{
		arr[a] = a + 1;
		afterArr[a] = a + 1;
	}
	while (m > 0)
	{
		cin >> i >> j;
		for (int a = i; a < j; a++)
		{
			afterArr[j] = arr[a];
			j--;
		}

		for (int a = 0; a < n; a++)
			arr[a] = afterArr[a];
		m--;
	}

	for(int a = 0; a < n; a++)
		cout << arr[a] << " ";
}