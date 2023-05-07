#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{
	deque<int> dq;
	int size = 0;
	int repeat = 0;
	int answer = 0;
	int input = 0;
	int idx = 0;
	cin >> size >> repeat;
	for (int i = 1; i <= size; i++)
		dq.push_back(i);

	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input == dq.front())
		{
			dq.pop_front();
			continue;
		}
		idx = find(dq.begin(), dq.end(), input) - dq.begin();
		if (dq.size() / 2 >= idx)
		{
			while (input != dq.front())
			{
				dq.push_back(dq.front());
				dq.pop_front();
;				answer++;
			}
			dq.pop_front();
		}
		else
		{
			while (input != dq.front())
			{
				dq.push_front(dq.back());
				dq.pop_back();
				answer++;
			}
			dq.pop_front();
		}
	}
	cout << answer;
}