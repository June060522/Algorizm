#include <iostream>

using namespace std;

int main()
{
	int arr[9][9] = { 0 };
	int max = -1;
	int _i = 0;
	int _j = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];

			if (arr[i][j] > max)
			{
				max = arr[i][j];
				_i = i + 1;
				_j = j + 1;
			}
		}
	}
	cout << max << endl << _i << ' ' << _j;

}