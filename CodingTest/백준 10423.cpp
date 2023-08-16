#include <iostream>
#include <queue>
using namespace std;

typedef struct edge {
	int s, e, v;
	bool operator > (const edge& temp) const {
		return v > temp.v;
	}
};

int arr[1001];

int find(int a) {
	if (a == arr[a])
	{
		return a;
	}
	else
	{
		return arr[a] = find(arr[a]);
	}
}


int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n, m, k;
	cin >> n >> m >> k;

	priority_queue<edge, vector<edge>, greater<edge>> pq;

	for (int i = 1; i <= n; i++)
	{
		arr[i] = i;
	}
	int answer = 0;
	int start, end, val;
	int useEdg = 1;
	int save;
	cin >> save;
	for (int i = 1; i < k; i++)
	{
		cin >> start;
		arr[start] = save;
		useEdg++;
	}

	for (int i = 1; i <= m; i++)
	{
		cin >> start >> end >> val;
		pq.push(edge{ start,end,val });
	}



	while (!pq.empty())
	{
		edge e = pq.top();
		pq.pop();
		int a = find(e.s);
		int b = find(e.e);
		if (a != b)
		{
			arr[b] = a;
			answer += e.v;
			useEdg++;
		}
	}
	cout << answer;
}