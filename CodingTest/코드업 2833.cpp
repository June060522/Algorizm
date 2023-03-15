#include <iostream>

using namespace std;

void f(int, int);
int iCount = 0;
int n, k;
int main()
{
	cin >> n >> k;
	f(0, 1);
	cout << iCount;
}

void f(int num, int cnt)
{
	if (cnt > k || num > n)
		return;

	if (num == n)
	{
		iCount++;
		return;
	}
	f(num + 1, cnt + 1);
	f(num + 2, cnt + 1);
	f(num + 3, cnt + 1);
}