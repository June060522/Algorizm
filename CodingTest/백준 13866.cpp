#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[4];
	int a, b,c;
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + 4);

	a = arr[1] + arr[2];
	b = arr[0] + arr[3];
	if (a < b)
		swap(a, b);
	c = a - b;
	cout << c;
}