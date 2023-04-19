#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	priority_queue<unsigned long long, vector<unsigned long long>, greater<>> pq;
	int n, m;
	unsigned long long sum = 0;
	unsigned long long input = 0;
	unsigned long long save = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		pq.push(input);
		sum += input;
	}

	for (int i = 0; i < m; i++)
	{
		save = pq.top();
		pq.pop();
		save += pq.top();
		pq.pop();
		pq.push(save);
		pq.push(save);
		sum += save;
	}

	cout << sum;
}