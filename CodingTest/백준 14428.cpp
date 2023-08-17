#include <iostream>
#include <cmath>

using namespace std;

pair<long long, long long> num[100001];
pair<long long, long long> tree[400004];

pair<long, long> Init(int start, int end, int node)
{
	if (start == end) return tree[node] = num[end];
	int mid = (start + end) / 2;
	return tree[node] = min(Init(start, mid, node * 2), Init(mid + 1, end, node * 2 + 1));
}

pair<long long, long long> Update(int start, int end, int node, int index, long long change)
{
	if (index < start || index > end) return tree[node];
	if (start == end) return make_pair(tree[node].first += change,tree[node].second);
	long long mid = (start + end) / 2;
	return tree[node] = min
	(Update(start, mid, node * 2, index, change),
		Update(mid + 1, end, node * 2 + 1, index, change));
}

pair<long long, long long> Query(int start, int end, int node, int left, int right)
{
	if (end < left || start > right) return make_pair(1000000001, 1000000001);

	if (left <= start && end <= right) return tree[node];
	int mid = (start + end) / 2;
	return min(Query(start, mid, node * 2, left, right), Query(mid + 1, end, node * 2 + 1, left, right));
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n, m, d;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> d;
		num[i] = make_pair(d, i);
	}

	Init(1, n, 1);
	cin >> m;
	int a, b, c;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		if (a == 1)
		{
			Update(1, n, 1, b, c - num[b].first);
			num[b].first = c;
		}
		else
		{
			cout << Query(1, n, 1, b, c).second << '\n';
		}
	}
}