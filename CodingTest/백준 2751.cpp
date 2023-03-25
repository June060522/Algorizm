#include <iostream>
#include <cmath>

using namespace std;

int arr[1000002] = { 0 };
int mius[1000002] = { 0 };
int main()
{
	int repeat = 0;
	int input = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input < 0)
		{
			input = abs(input);
			mius[input]++;
		}
		else
		{
			arr[input]++;
		}
	}

	for (int i = 1000001; i >= 0; i--)
	{
		if(mius[i] > 0)
			cout << -i << "\n";
	}
	for (int i = 0; i < 1000001; i++)
	{
		if(arr[i] > 0)
			cout << i << "\n";
	}
}