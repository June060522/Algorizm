#include <iostream>
using namespace std;
int arr[100001] = { 0 };
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n,repeat,a,b,sum = 0;
	cin >> n >> repeat;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
		arr[i + 1] = sum;
	}

	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b;
		cout << arr[b] - arr[a - 1] << '\n';
	}
}