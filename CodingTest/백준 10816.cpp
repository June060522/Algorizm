#include <iostream>
#include <algorithm>

using namespace std;

int arr[500001];
int findArr[500001];
int main()
{
	int repeat = 0;
	int k = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + repeat);
	k = repeat;

	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> findArr[i];
	}

	for (int i = 0; i < repeat; i++)
	{
		cout << upper_bound(arr,arr + k, findArr[i]) - lower_bound(arr, arr + k, findArr[i]) << ' ';
	}
}