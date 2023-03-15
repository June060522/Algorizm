#include <iostream>

using namespace std;

int num, sum, cnt = 0;
int numarr[1000000];
void f(int, int[]);
int main()
{
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	cin >> num >> sum;

	for (int i = 0; i < num; i++)
	{
		cin >> numarr[i];
	}

	for (int i = 0; i < num; i++)
	{
		f(i, numarr);
	}

	cout << cnt;
}

void f(int a, int arr[])
{
	int isum = 0;
	for (int i = a; i < num; i++)
	{
		isum += arr[i];
		if (isum % sum == 0)
			cnt++;
	}
}