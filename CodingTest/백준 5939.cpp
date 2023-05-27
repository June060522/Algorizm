#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int a, b, c;
	priority_queue<pair<int, pair<int, int>>, vector<pair<int,pair<int,int>>>,greater<>> pq;
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b >> c;
		pq.push(make_pair(a, make_pair(b, c)));
	}

	while (!pq.empty())
	{
		cout << pq.top().first << " " << pq.top().second.first << " " << pq.top().second.second << '\n';
		pq.pop();
	}
}