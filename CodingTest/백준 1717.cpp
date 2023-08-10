#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int find(int x)
{
	if (v[x] == x)
		return x;
	return v[x] = find(v[x]);
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	v.resize(n + 2);

	for (int i = 0; i <= n; i++)
	{
		v[i] = i;
	}
	int a, b, c;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		b = find(b);
		c = find(c);
		if (a == 0)
		{
			if (b == c) continue;
			v[c] = b;
		}
		else
		{
			if (b == c)
				cout << "YES" << '\n';
			else
				cout << "NO" << '\n';
		}
	}
}