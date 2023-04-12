#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	int arr[5];
	int sum = 0;
	int iMax = 0;
	int aMax = 0;
	int idx = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		sum = 0;
		aMax = 0;
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[j];
		}

		for (int k = 0; k < 3; k++)
		{
			for (int h = k + 1; h < 4; h++)
			{
				for (int l = h + 1; l < 5; l++)
				{
					sum = arr[k] + arr[h] + arr[l];
					sum %= 10;

					if (sum >= aMax)
						aMax = sum;
				}
			}
		}

		if (iMax <= aMax)
		{
			iMax = aMax;
			idx = i + 1;
		}
	}

	cout << idx;
}