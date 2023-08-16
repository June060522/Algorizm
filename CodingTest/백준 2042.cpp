#include <iostream>

using namespace std;

long long arr[1000001];
long long tree[4000004];

long long Init(int start, int end, int node)
{
	if (start == end) return tree[node] = arr[end];
	long long mid = (start + end) / 2;

	return tree[node] = Init(start, mid, node * 2) + Init(mid + 1, end, node * 2 + 1);
}

void Update(int start, int end, int node, int index, long long dif)
{
	if (index < start || index > end) return;

	tree[node] += dif;
	if (start == end) return;
	long long mid = (start + end) / 2;
	Update(start, mid, node * 2, index, dif);
	Update(mid + 1, end, node * 2 + 1, index, dif);
}

long long Sum(int start, int end, int node, int left, int right)
{
	if (left > end || right < start) return 0;
	if (left <= start && end <= right)return tree[node];
	long long mid = (start + end) / 2;
	return Sum(start, mid, node * 2, left, right) + Sum(mid + 1, end, node * 2 + 1, left, right);
}

int main()
{
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
			Update(1, n, 1, b, c - arr[b]);
			arr[b] = c;
		}
		else
		{
			cout << Sum(1, n, 1, b, c) << '\n';
		}

	}
}