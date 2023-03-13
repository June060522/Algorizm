#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int size = 0;
	int repeat = 0;

	cin >> size >> repeat;

	int* arr = new int[size];

	for (int i = 1; i <= size; i++)
	{
		arr[i - 1] = i;
	}

	int a,b;
	
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b;
		
		for (int j = 0; j < round(((float)b - (float)a) / 2); j++)
			swap(arr[a + j - 1], arr[b - j - 1]);
	}

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}