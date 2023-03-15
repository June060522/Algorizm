#include <iostream>

using namespace std;

void f(int, int, int);
int iCount = 0;
int n, k, m;
int main()
{
	cin >> n >> m >> k;
	f(0, 1, 0);
	cout << iCount;
}

void f(int num, int cnt, int plus)
{
	num += plus;
	if (cnt > k || num > n || num == m)
		return;

	if (num == n)
	{
		iCount++;
		return;
	}
	f(num, cnt + 1, 1);
	f(num, cnt + 1, 2);
	f(num, cnt + 1, 3);
}