#include <iostream>
#include <cmath>

int num[100001];
int tree[400004];
int tree2[400004];

using namespace std;

int Init(int start, int end, int node)
{
	if (start == end) return tree[node] = num[end];
	int mid = (start + end) / 2;
	return tree[node] = min(Init(start, mid, node * 2), Init(mid + 1, end, node * 2 + 1));
}

int Init2(int start, int end, int node)
{
	if (start == end) return tree2[node] = num[end];
	int mid = (start + end) / 2;
	return tree2[node] = max(Init2(start, mid, node * 2), Init2(mid + 1, end, node * 2 + 1));
}

int Query(int start, int end, int node, int left, int right)
{
	if (end < left || start > right) return 1000000001;

	if (left <= start && end <= right) return tree[node];
	int mid = (start + end) / 2;
	return min(Query(start, mid, node * 2, left, right), Query(mid + 1, end, node * 2 + 1, left, right));
}

int Query2(int start, int end, int node, int left, int right)
{
	if (end < left || start > right) return -1;

	if (left <= start && end <= right) return tree2[node];
	int mid = (start + end) / 2;
	return max(Query2(start, mid, node * 2, left, right), Query2(mid + 1, end, node * 2 + 1, left, right));
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> num[i];

	Init(1, n, 1);
	Init2(1, n, 1);

	int a, b;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		cout << Query(1, n, 1, a, b) << " " << Query2(1, n, 1, a, b) << '\n';
	}
}