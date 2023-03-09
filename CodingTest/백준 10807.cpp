#include <iostream>

using namespace std;

int main()
{
	int size, findNum,cnt = 0;
	cin >> size;

	int *arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	cin >> findNum;

	for (int i = 0; i < size; i++)
	{
		if (findNum == arr[i])
			cnt++;
	}
	cout << cnt;
}