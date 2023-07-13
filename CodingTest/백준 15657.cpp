#include<iostream>
#include <algorithm>

using namespace std;

int arr[9];
int num[9];
void backTraking(int n, int m, int cnt, int k)
{
	if (m == cnt)
	{
		for (int i = 0; i < cnt; i++)
		{
			cout << arr[i] << " ";
		}
		cout << '\n';
		return;
	}
	else
	{
		for (int i = k; i < n; i++)
		{
			arr[cnt] = num[i];
			backTraking(n, m, cnt + 1, i);
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> num[i];

	sort(num, num + n);
	backTraking(n, m, 0, 0);
}