#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int arr[10];

	int repeat = 0;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> arr[j];
		}
		sort(arr, arr + 10);
		cout << arr[7] << endl;
	}
}