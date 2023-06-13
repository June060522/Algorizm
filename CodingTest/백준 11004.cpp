#include <iostream>
#include <algorithm>

using namespace std;

int arr[5000000];
int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int num;
	int idx;
	cin >> num >> idx;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + num);
	cout << arr[idx - 1];
}