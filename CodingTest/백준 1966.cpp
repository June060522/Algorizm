#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int repeat = 0;
	int input = 0;
	int findIdx;
	int cnt = 0;
	int answer = 0;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		queue<int> q;
		priority_queue<int,vector<int>,less<>>pq;
		answer = 1;
		cin >> cnt;
		int findIdx;
		cin >> findIdx;
		for (int j = 0; j < cnt; j++)
		{
			cin >> input;
			q.push(input);
			pq.push(input);
		}
		while (true)
		{
			if (findIdx == 0 && q.front() == pq.top())
				break;
			if (q.front() == pq.top())
			{
				q.pop();
				pq.pop();
				answer++;
				findIdx--;
			}
			else
			{
				int temp = q.front();
				q.pop();
				q.push(temp);
				findIdx--;
			}

			if (findIdx < 0)
				findIdx = q.size() - 1;
		}
		cout << answer << '\n';
	}
}