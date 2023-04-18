#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	priority_queue<int,vector<int>,greater<int>> pq;
	int repeat = 0;
	int input = 0;
	cin >> repeat;
	for (int i = 0; i < repeat * repeat; i++)
	{
		cin >> input;
		pq.push(input);
		if (pq.size() > repeat)
			pq.pop();
	}

	cout << pq.top();
}