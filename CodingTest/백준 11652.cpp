#include <iostream>
#include <algorithm>

using namespace std;

long long int arr[100001];
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	
	long long int repeat,input;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	sort(arr, arr + repeat, less<>());

	long long int answer = 0;
	long long int answerVal = 0;
	long long int maxVal = 1;
	for (int i = 0; i < repeat; i++)
	{
		if (arr[i] != arr[i + 1])
		{
			if (maxVal > answerVal)
			{
				answerVal = maxVal;
				answer = arr[i];
			}
			maxVal = 1;
		}
		else
			maxVal++;
	}
	if (maxVal > answerVal)
		answer = arr[repeat - 1];
	cout << answer;
}