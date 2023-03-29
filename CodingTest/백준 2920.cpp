#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	int arr[8];
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= 7; i++)
	{
		if(arr[i] == arr[i - 1] - 1)
			repeat++;
	}
	if (repeat == 7)
	{
		cout << "descending";
		return 0;
	}

	repeat = 0;
	for (int i = 1; i <= 7; i++)
	{
		if (arr[i] == arr[i - 1] + 1)
			repeat++;
	}
	if (repeat == 7)
	{
		cout << "ascending";
		return 0;
	}


	cout << "mixed";
}