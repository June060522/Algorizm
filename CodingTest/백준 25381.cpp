#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int>qA;
	deque<int>qB;
	deque<int>qC;
	string input;
	cin >> input;
	int cnt = 0;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'A')
		{
			qA.push_back(i);
		}
		if (input[i] == 'B')
		{
			qB.push_back(i);
		}
		if (input[i] == 'C')
		{
			if (!qB.empty() && qB.front() < i)
			{
				qB.pop_front();
				cnt++;
			}
		}
	}

	while (!qA.empty() && !qB.empty())
	{
		if (qB.empty())
			qA.pop_front();
		if (qA.front() < qB.front())
		{
			qA.pop_front();
			qB.pop_front();
			cnt++;
		}
		else
		{
			qB.pop_front();
		}
	}
	cout << cnt;
}