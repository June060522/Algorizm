#include <iostream>
#include <queue>

using namespace std;

vector<int> v[100001];
bool isvisited[100001];
int answer[100001];

void BFS()
{
	queue<int> q;
	q.push(1);
	isvisited[1] = true;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 0; i < v[x].size(); i++)
		{
			int y = v[x][i];
			if (!isvisited[y])
			{
				isvisited[y] = true;
				q.push(y);
				answer[y] = x;
 			}
		}
	}
	
}

int main()
{
	int num,a,b;
	cin >> num;
	for (int i = 1; i < num; i++)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	BFS();

	for (int i = 2; i <= num; i++)
		cout << answer[i] << '\n';
}