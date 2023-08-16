#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

typedef struct edge {
	long long int s, e;
	double v;
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
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> xy;
	priority_queue<edge, vector<edge>, greater<edge>> pq;
	vec.resize(n + 1);

	for (int i = 1; i <= n; i++)
	{
		vec[i] = i;
	}

	long long int start, end, val;
	for (int i = 1; i <= n; i++)
	{
		cin >> start >> end;
		for (int j = 0; j < xy.size(); j++)
		{
			pq.push(edge{ i,j + 1,sqrt(pow(xy[j].first - start,2) + pow(xy[j].second - end,2)) });
		}
		xy.push_back(make_pair(start, end));
	}

	double answer = 0;
	int useEdg = 1;

	for (int i = 0; i < m; i++)
	{
		cin >> start >> end;
		start = find(start);
		end = find(end);
		if (start != end)
		{
			vec[end] = start;
			useEdg++;
		}

	}

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
	cout << fixed;
	cout.precision(2);
	cout << answer;
}