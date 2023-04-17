#include <iostream>
#include <algorithm>

using namespace std;

	int arr[10001] = { 0 };
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int repeat = 0;
	int input = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		arr[input]++;;
	}

	for (int i = 1; i < 10001; i++)
	{
		for(int j = 0; j < arr[i]; j++)
			cout << i << '\n';
	}
}