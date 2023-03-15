#include <iostream>

using namespace std;

int n;
void f(int x);
int arr[200];
int main()
{
	cin >> n;
	arr[1] = 1;
	arr[2] = 1;
	f(3);

	cout << arr[n];
}

void f(int x)
{
	if (x > n)
		return;

	arr[x] = (arr[x - 1] + arr[x - 2]) % 10009;
	f(x + 1);
}