#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[300001];
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int student, color, answer = 0;
	cin >> student >> color;
	for (int i = 0; i < color; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + color);

	int left = 1, right = arr[color - 1], middle;
	while (left <= right)
	{
		middle = (left + right) / 2;
		int cnt = 0;
		for (int i = 0; i < color; i++) {
			cnt += arr[i] / middle;
			if (arr[i] % middle != 0) 
				cnt++;
		}

		if (cnt <= student) {
			right = middle - 1;
			answer = middle;
		}
		else {
			left = middle + 1;
		}
	}

	cout << answer;
}