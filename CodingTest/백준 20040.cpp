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

	int answer = 0;
	int n, m;
	cin >> n >> m;
	v.resize(n);

	for (int i = 0; i < n; i++)
	{
		v[i] = i;
	}
	int b, c;
	for (int i = 1; i <= m; i++)
	{
		cin >> b >> c;
		if (find(b) == find(c))
		{
			if (answer == 0)
				answer = i;
		}
		else
		{
			v[find(c)] = find(b);
		}
	}
		cout << answer;
}