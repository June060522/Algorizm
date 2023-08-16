#include <iostream>
#include <queue>
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
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	priority_queue<edge, vector<edge>, greater<edge>> pq;
	vec.resize(n + 1);

	for (int i = 1; i <= n; i++)
	{
		vec[i] = i;
	}

	long long int answer = 0;
	int val;
	string s;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> val;
			if (i != j)
				pq.push(edge{i,j,val});
		}
	}

	int useEdg = 1;


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