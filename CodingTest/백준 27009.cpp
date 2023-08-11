#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

typedef struct edge {
	int s, e, v;
	bool operator > (const edge& temp) const {
		return v > temp.v;
	}
};

vector<int> vec;

int find(int a) {
	if (a == vec[a])
		return a;
	else
		return vec[a] = find(vec[a]);
}


int main()
{
	cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	priority_queue<edge, vector<edge>, greater<edge>> pq;
	vec.resize(n + 1);

	for (int i = 1; i <= n; i++)
	{
		vec[i] = i;
	}

	int start, end, val;
	for (int i = 0; i < m; i++)
	{
		cin >> start >> end >> val;
		pq.push(edge{ start,end,val });
	}

	int useEdg = 1;
	int answer = 0;

	int a, b;
	while (useEdg < n)
	{
		edge e = pq.top();
		a = find(e.s);
		b = find(e.e);
		pq.pop();
		if (a != b)
		{
			vec[b] = a;
			answer = max(answer, e.v);
			useEdg++;
		}
	}

	cout << answer;
}