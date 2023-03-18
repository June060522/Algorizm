#include <iostream>

using namespace std;

int main()
{
	int arr[10] = { 0 };
	int answer = 1;
	int input;
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		answer *= input;
	}

	while (answer > 0)
	{
		arr[answer % 10]++;
		answer /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\n";
}