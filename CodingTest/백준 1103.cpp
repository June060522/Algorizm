#include <iostream>
#include <vector>
#include <queue>
using namespace std;
priority_queue<pair<int,int>,vector<pair<int, int>>,greater<>> pq;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int repeat = 0;
	int size = 0;
	int input = 0;
	cin >> repeat >> size;
	int limit = size;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		pq.push(make_pair(input,i));
		while (pq.top().second + size <= i)pq.pop();

		cout << pq.top().first << " ";
	}
}