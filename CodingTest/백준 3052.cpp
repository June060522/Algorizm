#include <iostream>

using namespace std;

int main()
{
	int arr[10] = { 0 };
	
	bool a = true;

	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	int num = 0;
	int farr[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	for (int i = 0; i < 10; i++)
	{
		a = true;
		for (int j = 0; j < 10; j++)
		{
			if (farr[j] == arr[i] % 42)
				a = false;
		}
		farr[i] = arr[i] % 42;

		if (a)
			num++;
	}

	cout << num;
}