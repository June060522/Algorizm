#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <climits>

using namespace std;

int main()
{

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	int answer = 0;
	int n;
	cin >> n;
	
	int a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		pq.push({ b,a });
	}
	
	int minTime = 0;
	while (!pq.empty()) {
		pair<int, int> p = pq.top();
		pq.pop();

		if (minTime > p.second)
			continue;

		answer++;
		minTime = p.first;
	}

	cout << n - answer;
}