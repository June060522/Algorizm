#include <iostream>

using namespace std;

void f(int, int, int);
int iCount = 0;
int n, k;
int main()
{
	cin >> n >> k;
	f(0, 1, 0);
	cout << iCount;
}

void f(int num, int cnt,int plus)
{
	num += plus;
	if (cnt > k || num > n)
		return;

	if (num == n)
	{
		iCount++;
		return;
	}
	if (plus != 1)
		f(num, cnt + 1, 1);
	if (plus != 2)
		f(num, cnt + 1, 2);
	if (plus != 3)
		f(num, cnt + 1, 3);
}