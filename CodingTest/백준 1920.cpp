#include <iostream>
#include <algorithm>

using namespace std;

int arr[100000] = { 0 };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a,b = 0;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + a);
	cin >> b;
	for (int i = 0; i < b; i++)
	{
		int input = 0;
		int start = 0;
		int end = a - 1;
		cin >> input;
		while (start <= end)
		{
			int mid = (start + end) / 2;
			if (input == arr[mid])
			{
				cout << 1;
				break;
			}
			else if(input > arr[mid])
			{
				start = mid + 1;
			}
			else if(input < arr[mid])
			{
				end = mid - 1;
			}
		}
		if (start > end)	
			cout << 0;
		cout << "\n";
	}
}