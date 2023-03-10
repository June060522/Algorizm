#include <iostream>

using namespace std;

int main()
{
	int arr[9] = { 0 };
	int max = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		if (max < arr[i])
			max = arr[i];
	}

	for (int i = 0; i < 9; i++)
	{
		if (max == arr[i])
			cout << max << endl << i + 1;
	}
}