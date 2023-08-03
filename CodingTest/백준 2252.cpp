#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int>node[32001];
int isVisited[32001];
int main()
{
	int n, m;
	int input, input2;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> input >> input2;
		node[input].push_back(input2);
		isVisited[input2]++;
	}

	queue <int> q;
	for (int i = 1; i <= n; i++)
	{
		if (isVisited[i] == 0)
			q.push(i);
	}

	for (int i = 1; i <= n; i++)
	{
		int pri = q.front();
		q.pop();
		cout << pri << " ";
		for (int i = 0; i < node[pri].size(); i++)
		{
			isVisited[node[pri][i]]--;
			if (isVisited[node[pri][i]] == 0)
				q.push(node[pri][i]);
		}
	}

}