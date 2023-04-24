#include <iostream>
#include <queue>

using namespace std;

priority_queue<int,vector<int>,greater<>> q;
priority_queue<int> miusq;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int repeat = 0;
	int input = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input == 0)
		{
			if (miusq.empty() && q.empty())
			{
				cout << 0 << '\n';
			}
			else if(miusq.empty())
			{
				cout << q.top() << '\n';
				q.pop();
			}
			else if(q.empty())
			{
				cout << miusq.top() << '\n';
				miusq.pop();
			}
			else if (miusq.top() * -1 > q.top())
			{
				cout << q.top() << '\n';
				q.pop();
			}
			else
			{
				cout << miusq.top() << '\n';
				miusq.pop();
			}
		}
		else
		{
			if (input < 0)
				miusq.push(input);
			else
				q.push(input);
		}
	}
}