#include <iostream>

using namespace std;

int main()
{
	int size = 0; 
	int repeat = 0;

	cin >> size >> repeat;
	int arr[101] = { 0 };
	int savearr[101] = { 0 };
	
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

		for (int j = begin; j <= end; j++)
		{
			if (middle + j <= end  + begin)
				arr[j - 1] = savearr[middle + j - begin - 1];
			else
				arr[j - 1] = savearr[begin - 1 + middle + j - end - begin - 1];
		}
	}

	for (int i = 0; i < size; i++)
		cout << arr[i] << ' ';
}