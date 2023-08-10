#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

typedef struct edge {
	int s, e, v;
	bool operator > (const edge& temp) const {
		return v > temp.v;
	}
};

vector<int> vec;
vector<int> answerVec;

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
	while (true)
	{
		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		priority_queue<edge, vector<edge>, greater<edge>> pq;
		vec.resize(n);

		for (int i = 0; i < n; i++)
		{
			vec[i] = i;
		}

		int start, end, val;
		int answer = 0;
		for (int i = 0; i < m; i++)
		{
			cin >> start >> end >> val;
			answer += val;
			pq.push(edge{ start,end,val });
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

				answer -= e.v;

				useEdg++;
			}
		}
		answerVec.push_back(answer);
	}

	for(int i = 0; i < answerVec.size(); i++)
		cout << answerVec[i] << '\n';
}