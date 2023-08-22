#include <iostream>
#include <cmath>

using namespace std;

long long arr[100001];
int main()
{
	int repeat;
	cin >> repeat;

	long long a = 0, b = 0;
	long long minVal = 2000000001;

	for (int i = 1; i <= repeat; i++)
	{
		cin >> arr[i];
	}

	long long idx1 = 1;
	long long idx2 = repeat;

	long long saveVal;
	while (idx1 < idx2)
	{
		saveVal = arr[idx1] + arr[idx2];

		if (saveVal > 0)
		{
			if (abs(saveVal) < minVal)
			{
				minVal = abs(saveVal);
				a = arr[idx1];
				b = arr[idx2];
			}
			idx2--;
		}
		else if (saveVal < 0)
		{
			if (abs(saveVal) < minVal)
			{
				minVal = abs(saveVal);
				a = arr[idx1];
				b = arr[idx2];
			}
			idx1++;
		}
		else
		{
			a = arr[idx1];
			b = arr[idx2];
			break;
		}
	}

	cout << a << " " << b;
}