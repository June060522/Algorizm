#include <iostream>
#include <queue>

using namespace std;

long long answer = 1;
long long startV, endV;

bool isRight = false;

void Bfs()
{
	queue<long long> q;
	q.push(startV);
	while (!q.empty())
	{
		answer++;
		vector<long long> saveV;
		while (!q.empty())
		{
			long long x = q.front();
			q.pop();

			if (x > endV)
				continue;
			if (x * 2 == endV || x * 10 + 1 == endV)
				return;
			saveV.push_back(x * 2);
			saveV.push_back(x * 10 + 1);
		}

		for (auto i : saveV)
			q.push(i);
	}

	answer = -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin >> startV >> endV;
	Bfs();
	cout << answer;
}