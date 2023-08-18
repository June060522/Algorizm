#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

typedef struct edge {
	long long s, e, v;
	bool operator > (const edge& temp) const {
		return v > temp.v;
	}
};

vector<int> vec;

int find(int a) {
	if (a == vec[a])
	{
		return a;
	}
	else
	{
		return vec[a] = find(vec[a]);
	}
}


int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<pair<int, int>>x;
	vector<pair<int, int>>y;
	vector<pair<int, int>>z;

	priority_queue<edge, vector<edge>, greater<edge>> pq;
	vec.resize(n + 1);

	for (int i = 1; i <= n; i++)
	{
		vec[i] = i;
	}

	long long a, b, c;
	long long val = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		x.push_back(make_pair(a, i));
		y.push_back(make_pair(b, i));
		z.push_back(make_pair(c, i));
	}

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	sort(z.begin(), z.end());

	for (int i = 1; i < n; i++)
	{
		pq.push(edge{x[i - 1].second,x[i].second, abs(x[i-1].first - x[i].first)});
		pq.push(edge{y[i - 1].second,y[i].second, abs(y[i-1].first - y[i].first)});
		pq.push(edge{z[i - 1].second,z[i].second, abs(z[i-1].first - z[i].first)});
	}

	int useEdg = 1;
	long long answer = 0;

	while (useEdg < n)
	{
		edge e = pq.top();
		pq.pop();
		if (find(e.s) != find(e.e))
		{
			int a = find(e.s);
			int b = find(e.e);

			if (a != b)
				vec[b] = a;

			answer += e.v;

			useEdg++;
		}
	}

	cout << answer;
}