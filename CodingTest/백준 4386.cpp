#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

typedef struct edge {
	int s, e;
	double v;
	bool operator > (const edge& temp) const {
		return v > temp.v;
	}
};

vector<int> vec;
pair<int, int> arr[101];
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
	int n;
	cin >> n;

	priority_queue<edge, vector<edge>, greater<edge>> pq;
	vec.resize(n + 1);

	for (int i = 1; i <= n; i++)
	{
		vec[i] = i;
	}

	int start, end;
	double val, x, y;
	for (int i = 1; i <= n; i++)
	{
		cin >> x >> y;
		arr[i] = make_pair(x, y);

		for (int j = 1; j < i; j++)
		{
			start = i;
			end = j;
			val = sqrt(pow(arr[j].first - x,2) + pow(arr[j].second - y,2));
			pq.push(edge{ start,end,val });
			pq.push(edge{ end,start,val });
		}
	}

	int useEdg = 1;
	double answer = 0;


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