#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	priority_queue<int> pq1;
	priority_queue<int, vector<int>, greater<int>> pq;
	int repeat = 0;
	int input;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input == 0)
		{
			if (pq.empty())
				cout << 0 << '\n';
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else
			pq.push(input);
	}
}