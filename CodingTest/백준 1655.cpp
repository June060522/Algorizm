#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	priority_queue<int, vector<int>> pq;
	priority_queue<int, vector<int>, greater<int>> pq1;
	int repeat = 0;
	cin >> repeat;
	int input = 0;
	int idx = 0;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (pq.size() > pq1.size())
			pq1.push(input);
		else
			pq.push(input);

		if (!pq.empty() && !pq1.empty() && pq.top() > pq1.top())
		{
			int pqT, pq1T;
			pqT = pq.top();
			pq1T = pq1.top();
			pq.pop();
			pq1.pop();
			pq.push(pq1T);
			pq1.push(pqT);
		}
		cout << pq.top() << '\n';
	}

}