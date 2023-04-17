#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int size = 0;
	cin >> size;
	int* arr = new int[size];
	int* save = new int[size];
	int* answer = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		save[i] = arr[i];
	}

	sort(save, save + size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (save[i] == arr[j])
			{
				answer[j] = i;
				arr[j] = -1;
				break;
			}
		}
	}

	for (int i = 0; i < size; i++)
		cout << answer[i] << " ";
}