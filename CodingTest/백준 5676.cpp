#include <iostream>
#include <vector>

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

	long long n, m;
	while (cin >> n >> m)
	{
		vector<char>answer;
		for (int i = 1; i <= n; i++)
			cin >> arr[i];

		Init(1, n, 1);
		char c;
		long long a, b;

		for (int i = 0; i < m; i++)
		{
			cin >> c >> a >> b;
			if (c == 'C')
			{
				Update(1, n, 1, a, b);
			}
			else
			{
				long long int d = Mul(1, n, 1, a, b);
				if (d < 0)answer.push_back('-');
				else if (d > 0) answer.push_back('+');
				else answer.push_back('0');
			}
		}
		for (auto i : answer)
			cout << i;
		cout << '\n';
	}

}