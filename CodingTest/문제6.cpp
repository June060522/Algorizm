#include <iostream>
#include <algorithm>

using namespace std;

int arr[100000];
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int temp;

	for (int i = 0; i < m; i++)
	{
		cin >> temp;

		if (*upper_bound(arr, arr + n, temp) == *lower_bound(arr, arr + n, temp))
			cout << -1;
		else
			cout << upper_bound(arr, arr + n, temp) - arr;

		cout << endl;
	}
}