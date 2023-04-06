#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int start, end;
	cin >> start >> end;
	bool* arr = new bool[end + 1];
	fill(arr, arr + end + 1, true);
	
	for (int i = 2; i < start; i++)
	{
		if (arr[i])
		{
			for (int j = i; j <= end; j += i)
				arr[j] = false;
		}
	}
	
	if (start == 1)
		start = 2;
	
	for (int i = start; i <= end; i++)
	{
		if (arr[i])
		{
			cout << i << "\n";
			for (int j = i; j <= end; j += i)
			{
				arr[j] = false;
			}
		}
	}
}