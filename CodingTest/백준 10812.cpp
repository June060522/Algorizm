#include <iostream>

using namespace std;

int main()
{
	int size = 0; 
	int repeat = 0;

	cin >> size >> repeat;
	int* arr = new int[size];
	int* savearr = new int[size];
	
	int begin = 0;
	int middle = 0;
	int end = 0;

	for (int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < repeat; i++)
	{
		for (int j = 0; j < size; j++)
		{
			savearr[j] = arr[j];
		}
		cin >> begin >> end >> middle;

		for (int j = begin; j < end; j++)
		{
			if (middle + j <= end)
				arr[begin + j - 1] = savearr[middle + j - 1];
			else
				arr[begin + j - 1] = savearr[begin + middle + j - end - 1];
		}
	}

	for (int i = 0; i < size; i++)
		cout << arr[i] << ' ';
}