#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	int num = 0;
	int saveNum = 0;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		q.push(i);
	}
	while (q.size() > 0)
	{
		cout << q.front() << " ";
		q.pop();
		if (!q.empty())
		{
			saveNum = q.front();
			q.pop();
			q.push(saveNum);
		}
	}
}