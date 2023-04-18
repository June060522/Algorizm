#include <iostream>
#include <queue>

using namespace std;

int main()
{
	priority_queue<int> pq;
	int repeat = 0;
	cin >> repeat;
	int input = 0;
	int save = 0;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input == 0)
		{
			if (pq.empty())
				cout << -1 << '\n';
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else
		{
			for (int i = 0; i < input; i++)
			{
				cin >> save;
				pq.push(save);
			}
		}
	}
}