#include <iostream>

using namespace std;

int arr[11];

int main()
{
	int save = 0;
	int answer = 700;
	for (int i = 1; i < 11; i++)
	{
		cin >> save;
		arr[i] = arr[i - 1] + save;
	}

	int start = 0, end = 1, val;
	while (end < 11)
	{
		val = arr[end] - arr[start];
		{

		}
	}
}