#include <iostream>

using namespace std;

int sum[1000001];

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> sum[i];
		sum[i] += sum[i - 1];
	}

	cin >> n;
	int a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << sum[b] - sum[a - 1] << '\n';
	}
}