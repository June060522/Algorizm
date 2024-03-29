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


	while (useEdg < n)
	{
		edge e = pq.top();
		pq.pop();
		if (find(e.s) != find(e.e))//사이클을 막기 위해
		{
			int a = find(e.s);// 연결
			int b = find(e.e);//연결

			if (a != b)//연결
				vec[b] = a;

			answer = max(answer,e.v);

			useEdg++;
		}
	}

	cout << answer;
}