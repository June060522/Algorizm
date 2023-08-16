#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

typedef struct edge {
	int s, e;
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
	double d;
	int n, m;
	cin >> d;
	cin >> n;

	string s;
	unordered_map<string, int> um;

	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		um[s] = i;
	}

	priority_queue<edge, vector<edge>, greater<edge>> pq;
	vec.resize(n + 1);

	cin >> m;

	for (int i = 1; i <= n; i++)
	{
		vec[i] = i;
	}

	string start, end;
	double val;
	for (int i = 0; i < m; i++)
	{
		cin >> start >> end >> val;
		pq.push(edge{ um[start],um[end],val });
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

	if (d >= answer)
		cout << "Need "<< answer <<" miles of cable";
	else
		cout << "Not enough cable";
}