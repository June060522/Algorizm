#include <iostream>

using namespace std;

int main()
{
	int cnt, answer;
	int max = 0;
	int sum = 0;
	cin >> cnt >> answer;

	int* arr = new int[cnt];
	for (int i = 0; i < cnt; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < cnt; i++)
	{
		for (int j = i + 1; j < cnt; j++)
		{
			for (int k = j + 1; k < cnt; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (answer - sum < answer - max && sum <= answer)
					max = sum;
			}
		}
	}

	cout << max;
}