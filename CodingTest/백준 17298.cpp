#include <iostream>
#include <stack>

using namespace std;

int arr[1000001] = { 0 };
int answer[1000001] = { 0 };
int main()
{
	stack <int> s;
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
		cin >> arr[i];

	int max = -1;
	for (int i = repeat - 1; i >= 0; i--)
	{
		if (arr[i] > max)
		{
			while (!s.empty())
			{
				s.pop();
			}
		}

		if (s.empty())
		{
			answer[i] = -1;
			s.push(arr[i]);
		}
		else
		{
			while (!s.empty() && arr[i] >= s.top())
			{
				s.pop();
			}
			if (s.empty())
				answer[i] = -1;
			else
				answer[i] = s.top();
			s.push(arr[i]);
		}

		if (max <= arr[i])
			max = arr[i];
	}

	for (int i = 0; i < repeat; i++)
		cout << answer[i] << ' ';
}