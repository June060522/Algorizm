#include <iostream>

using namespace std;

int main()
{
	int arr[30] = { 0 };

	int c = 0;
	for (int i = 1; i <= 30; i++)
		arr[i - 1] = i;

	for (int i = 0; i < 28; i++)
	{
		cin >> c;
		arr[c - 1] = 0;
	}

	int min = 0;
	int max = 0;

	for (int i = 0; i < 30; i++)
	{
		if (arr[i] != 0)
		{
			if (min != 0)
				max = arr[i];
			else
				min = arr[i];
			
		}
	}
	if (min > max)
		swap(min, max);

	cout << min << endl << max;
}