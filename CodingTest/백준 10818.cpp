#include <iostream>

using namespace std;

int main()
{
	int cnt, min = 0, max = 0;

	cin >> cnt;

	int* arr = new int[cnt];

	for (int i = 0; i < cnt; i++)
	{
		cin >> arr[i];
	}

	min = arr[0];
	max = arr[0];

	for (int i = 0; i < cnt; i++)
	{
		if (min > arr[i])
			min = arr[i];

		if (max < arr[i])
			max = arr[i];
	}
	cout << min << " " << max;
}