#include<iostream>
#include <algorithm>

using namespace std;

int arr[9];
int num[9];
bool isVisit[9];
void backTraking(int n, int cnt)
{
	if (n == cnt)
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
			if (isVisit[i] == true) continue;
			arr[cnt] = i + 1;
			isVisit[i] = true;
			backTraking(n, cnt + 1);
			isVisit[i] = false;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	backTraking(n, 0);
}