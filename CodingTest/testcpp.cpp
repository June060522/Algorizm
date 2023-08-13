#include <iostream>
#include <algorithm>

using namespace std;
int arr[200001];
int arr2[200001];
int arr3[200001];
int main()
{
	int a, b;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		arr[i] = b;
		arr2[i] = b;
	}

	sort(arr2, arr2 + n);
	int answer = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != arr2[i])
		{
			for (int j = i; j < n; j++)
			{
				if (arr[i] == arr2[j])
				{
					swap(arr[i], arr2[j]);
					answer++;
				}
			}
		}
	}

	cout << answer;
}