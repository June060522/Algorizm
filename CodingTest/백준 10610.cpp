#include <iostream>
#include<algorithm>
using namespace std;

int arr[100001];
int main()
{
	string str;
	int num = 0;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		arr[i] = str[i] - '0';
		num += arr[i];
	}

	sort(arr, arr + str.length(), greater<>());

	if (num % 3 != 0 || arr[str.length() - 1] != 0)
	{
		cout << -1;
		return 0;
	}

	for (int i = 0; i < str.length(); i++)
	{
		cout << arr[i];
	}
} 