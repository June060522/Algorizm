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
	int n;
	cin >> n;

	priority_queue<edge, vector<edge>, greater<edge>> pq;
	vec.resize(n + 1);

	for (int i = 1; i <= n; i++)
	{
		vec[i] = i;
	}

	int answer = 0;
	int val;
	string s;
	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		for (int j = 0; j < n; j++)
		{
			val = 0;
			if (s[j] >= 'a' && s[j] <= 'z')
				val = s[j] - 'a' + 1;
			else if(s[j] >= 'A' && s[j] <= 'Z')
				val = s[j] - 'A' + 27;

			answer += val;

			if(val != 0 && i != j + 1)
				pq.push(edge{ i,j + 1,val });
		}
	}

	int useEdg = 0;


	while (!pq.empty())
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

	if (useEdg >= n - 1)
		cout << answer;
	else
		cout << -1;
}