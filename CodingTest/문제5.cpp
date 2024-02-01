#include <iostream>
#include <queue>
using namespace std;
int main()
{
	priority_queue<int> pq;

	int n, m,input;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		pq.push(input);
	}

	for (int i = 0; i < m; i++)
	{
		pq.push(pq.top() - 1);
		pq.pop();
	}
	cout << pq.top();
}