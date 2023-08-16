#include <iostream>
using namespace std;

int arr[11];
int main() 
{
	int n, k,answer = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		while (k >= arr[i])
		{
			k -= arr[i];
			answer++;
		}
	}
	cout << answer;
}