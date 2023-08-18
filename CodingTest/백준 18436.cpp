#include <iostream>
#include <cmath>

using namespace std;

int arr[100001];
pair<long long, long long> num[100001];
pair<long long, long long> tree[400004];

pair<long, long> Init(int start, int end, int node)
{
	if (start == end) return tree[node] = num[end];
	int mid = (start + end) / 2;
	pair<long, long> p = Init(start, mid, node * 2);
	pair<long, long> p2 = Init(mid + 1, end, node * 2 + 1);
	return tree[node] = make_pair(p.first + p2.first, p.second + p2.second);
}

pair<long long, long long> Update(int start, int end, int node, int index, long long change)
{
	if (index < start || index > end) return tree[node];
	if (change % 2 == 1)
	{
		tree[node].first++;
		tree[node].second--;
	}
	else
	{
		tree[node].first--;
		tree[node].second++;
	}
	if (start == end) return tree[node];
	long long mid = (start + end) / 2;

	pair<long, long> p1 = Update(start, mid, node * 2, index, change);
	pair<long, long> p2 = Update(mid + 1, end, node * 2 + 1, index, change);

	return tree[node] = make_pair(p1.first + p2.first, p1.second + p2.second);
}

pair<long long, long long> Query(int start, int end, int node, int left, int right)
{
	if (end < left || start > right) return make_pair(0, 0);

	if (left <= start && end <= right) return tree[node];
	int mid = (start + end) / 2;
	pair<long long, long long> p1 = Query(start, mid, node * 2, left, right);
	pair<long long, long long> p2 = Query(mid + 1, end, node * 2 + 1, left, right);
	return make_pair(p1.first + p2.first, p1.second + p2.second);
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
		cin >> arr[i];
		num[i] = make_pair(arr[i] % 2, (arr[i] + 1) % 2);
	}

	Init(1, n, 1);
	cin >> m;
	int a, b, c;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		if (a == 1)
		{
			if (arr[b] % 2 != c % 2)
			{
				Update(1, n, 1, b, c);
			}
			num[b].first = c % 2;
			num[b].second = (c + 1) % 2;
			arr[b] = c;
		}
		else if (a == 2)
		{
			cout << Query(1, n, 1, b, c).second << '\n';
		}
		else
		{
			cout << Query(1, n, 1, b, c).first << '\n';
		}
	}
}