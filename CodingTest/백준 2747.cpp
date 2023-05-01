#include <iostream>

using namespace std;

int n;
void f(int x);
int arr[45] = { 1,1, };
int main()
{
	cin >> n;
	f(2);

	cout << arr[n-1];
}

void f(int x)
{
	if (x == 45)
		return;

	arr[x] = (arr[x - 1] + arr[x - 2]);
	f(x + 1);
}