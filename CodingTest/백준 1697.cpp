#include <iostream>
#include <queue>
using namespace std;

bool visited[300001];
vector<int> pos[300001];
int x, y, answer = 0;

void Bfs(int start)
{
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty())
	{
		answer++;
		vector<int> saveVec;

		while (!q.empty())
		{
			saveVec.push_back(q.front());
			q.pop();
		}
		for (int j = 0; j < saveVec.size(); j++)
		{
			for (int i = 0; i < pos[saveVec[j]].size(); i++)
			{
				int z = pos[saveVec[j]][i];
				if (z == y)
					return;
				if (!visited[z])
				{
					q.push(z);
					visited[z] = true;
				}
			}
		}
	}
}

int main()
{
	for (int i = 0; i <= 150000; i++)
	{
		pos[i].push_back(i * 2);
		pos[i].push_back(i + 1);

		if(i != 0)
			pos[i].push_back(i - 1);
	}

	cin >> x >> y;
	if (x == y)
		cout << 0;
	else
	{
		Bfs(x);
		cout << answer;
	}
}