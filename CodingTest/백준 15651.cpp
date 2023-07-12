#include<iostream>

using namespace std;

int arr[9];
void backTraking(int n, int m, int cnt)
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
		for (int i = 0; i < n; i++)
		{
			arr[cnt] = i + 1;
			backTraking(n, m, cnt + 1);
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	backTraking(n, m, 0);
}