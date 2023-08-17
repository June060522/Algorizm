#include <iostream>
#include <algorithm>

using namespace std;

long long arr[1000001];
long long tree[4000004];
long long lazy[4000004];

void lazyUpdate(int start, int end, int node)
{
	if (lazy[node])
	{
		tree
			[node] += (end - start + 1) * lazy[node];

		if (start != end)
		{
			lazy[node * 2] += lazy[node];
			lazy[node * 2 + 1] += lazy[node];
		}

		lazy[node] = 0;
	}
}

long long Init(int start, int end, int node)
{
	if (start == end) return tree[node] = arr[end];
	long long mid = (start + end) / 2;

	return tree[node] = Init(start, mid, node * 2) + Init(mid + 1, end, node * 2 + 1);
}

long long Update(int start, int end, int node, int left, int right, long long dif)
{
	lazyUpdate(start, end, node);

	if (right < start || end < left) return tree[node];

	if (left <= start && end <= right)
	{
		lazy[node] += dif;

		lazyUpdate(start, end, node);

		return tree[node];
	}

	long long mid = (start + end) / 2;

	return tree[node] = (Update(start, mid, node * 2, left, right, dif) + Update(mid + 1, end, node * 2 + 1, left, right, dif));
}

long long Sum(int start, int end, int node, int left, int right)
{
	lazyUpdate(start, end, node);

	if (left > end || right < start) return 0;
	if (left <= start && end <= right)return tree[node];
	long long mid = (start + end) / 2;
	return Sum(start, mid, node * 2, left, right) + Sum(mid + 1, end, node * 2 + 1, left, right);
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	long long n,m;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	Init(1, n, 1);
	long long a, b, c, d;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		if (a == 1)
		{
			cin >> c >> d;
			Update(1, n, 1, b, c, d);
		}
		else
		{
			cout << Sum(1, n, 1, b, b) << '\n';
		}

	}
}