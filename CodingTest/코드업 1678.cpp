#include <iostream>

using namespace std;

int main()
{
	int size[5][5] = { 0 };
	int max = 0;
	int sum = 0;
	int* arr[10];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> size[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum = 0;
			for (int k = j; k <= j + 2; k++)
			{
				for (int l = i; l <= i + 2; l++)
				{
					sum += size[l][k];
				}
			}
			if (sum > max)
				max = sum;
		}
	}
	cout << max;
}