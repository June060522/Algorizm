#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	unsigned long long int round = 1;
	unsigned long long int speak = 0;
	int player = 0;
	int saveNum = 0;
	cin >> player;
	for (int i = 1; i <= player; i++)
		q.push(i);

	while (q.size() != 1)
	{
		speak = round * round * round;

		speak %= q.size();
		if(speak == 0)
			speak = q.size();
		for (int i = 0; i < speak - 1; i++)
		{
			saveNum = q.front();
			q.push(saveNum);
			q.pop();
		}
		q.pop();

		round++;
	}

	cout << q.front();
}