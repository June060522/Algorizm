#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int repeat = 0;
	int cnt = 0;
	int input = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		priority_queue<int>q;
		priority_queue<int>pq;
		cin >> cnt;
		cout << (cnt + 1) / 2 << '\n';
		for (int i = 1; i <= cnt; i++)
		{
			cin >> input;
			q.push(input);
			if (i % 2 == 1)
			{
				pq = q;
				for (int j = 0; j < i / 2; j++)
					q.pop();
				if ((i - 1) % 20 == 0 && i != 1)
					cout << '\n';
				cout << q.top() << " ";
				q = pq;
			}
		}
		cout << '\n';
	}
}