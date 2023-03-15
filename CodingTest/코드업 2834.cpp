#include <iostream>

using namespace std;

void f(int, int);
int caseF();
int arr[16] = { 0 };
int iCount = 0;
int n, k;
int main()
{
	cin >> n >> k;
	f(0, 1);
	cout << caseF();
}

void f(int num, int cnt)
{
	if (cnt > k || num > n)
		return;

	if (num == n)
	{
		arr[cnt]++;
		return;
	}
	f(num + 1, cnt + 1);
	f(num + 2, cnt + 1);
}

int caseF()
{
	int a = 0;
	for (int i = 0; i < 16; i++)
	{
		a += arr[i] * arr[i];
	}
	return a;
}