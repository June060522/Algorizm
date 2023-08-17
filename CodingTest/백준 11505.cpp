#include <iostream>

using namespace std;

long long arr[1000001];
long long tree[4000004];

#define Mod 1000000007

long long Init(int start, int end, int node)
{
	if (start == end) return tree[node] = arr[end];
	long long mid = (start + end) / 2;

	return tree[node] = (Init(start, mid, node * 2) * Init(mid + 1, end, node * 2 + 1)) % Mod;
}

long long Update(int start, int end, int node, int index, long long change)
{
	if (index < start || index > end) return tree[node];
	if (start == end) return tree[node] = change;
	long long mid = (start + end) / 2;
	return tree[node] =
		(Update(start, mid, node * 2, index, change) *
			Update(mid + 1, end, node * 2 + 1, index, change)) % Mod;
}

long long Mul(int start, int end, int node, int left, int right)
{
	if (left > end || right < start) return 1;
	if (left <= start && end <= right)return tree[node];
	long long mid = (start + end) / 2;
	return (Mul(start, mid, node * 2, left, right) * Mul(mid + 1, end, node * 2 + 1, left, right)) % Mod;
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	long long n, m, k;
	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	Init(1, n, 1);
	long long a, b, c;

	for (int i = 0; i < m + k; i++)
	{
		cin >> a >> b >> c;
		if (a == 1)
		{
			Update(1, n, 1, b, c);
		}
		else
		{
			cout << Mul(1, n, 1, b, c) << '\n';
		}

	}
}