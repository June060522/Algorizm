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

	int n;
	cin >> n;
	v.resize(n + 2);

	for (int i = 0; i <= n; i++)
	{
		v[i] = i;
	}
	int b, c;
	for (int i = 2; i < n; i++)
	{
		cin >> b >> c;
		b = find(b);
		c = find(c);
		v[c] = b;
	}
	int a = find(1);
	int d = 0;
	for (int i = 1; i <= n; i++)
	{
		d = find(i);
		if (a != v[d])
		{
			break;
		}
	}
	cout << a << " " << d;
}