#include <iostream>
using namespace std;

int main()
{
	int arr[1001];
	int idx = 1;
	int answer = 0;
	for (int i = 1; idx < 1001; i++)
	{
		for (int j = 0; j < i; j++)
		{
			arr[idx] = i;
			idx++;

			if (idx > 1000)
				break;
		}
	}
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
		answer += arr[i];

	cout << answer;
}