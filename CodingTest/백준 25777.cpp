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
	int n,m;
	cin >> n >> m;
	vector<string> vecS;
	priority_queue<edge, vector<edge>, greater<edge>> pq;
	vec.resize(n + 1);

	for (int i = 0; i <= n; i++)
	{
		vec[i] = i;
	}

	int answer = 0;
	int val;
	string s;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < i; j++)
		{
			val = 0;
			for (int k = 0; k < m; k++)
			{
				val += abs(s[k] - vecS[j][k]);
			}
			pq.push(edge{i + 1,j + 1,val});
		}
		vecS.push_back(s);
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

			answer = max(e.v,answer);

			useEdg++;
		}
	}
	cout << answer;
}
