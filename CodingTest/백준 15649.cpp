#include<iostream>

using namespace std;

int arr[9];
bool isvisit[9];
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
			if (isvisit[i] == true) continue;
			isvisit[i] = true;
			arr[cnt] = i + 1;
			backTraking(n, m, cnt + 1);
			arr[cnt] = 0;
			isvisit[i] = false;
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	backTraking(n, m, 0);
}