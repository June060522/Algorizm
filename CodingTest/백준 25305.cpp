#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num, idx;
	cin >> num >> idx;
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + num, greater<>());
	cout << arr[idx - 1];
}