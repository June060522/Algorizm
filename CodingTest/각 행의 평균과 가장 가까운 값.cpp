#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[9];
	for (int i = 0; i < 9; i++)
	{
		int avg = 0;
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[j];
			avg += arr[j];
		}
		avg /= 9;
		sort(arr, arr + 9);
		int idx = 0;
		while (arr[idx] < avg)
		{
			idx++;
		}
		int recent = 0;
		if (idx == 0)
			recent = arr[idx];
		else
			if (avg - arr[idx - 1] >= arr[idx] - avg)
				recent = arr[idx];
			else
				recent = arr[idx - 1];
		cout << avg << " " << recent;
		cout << endl;
	}
}