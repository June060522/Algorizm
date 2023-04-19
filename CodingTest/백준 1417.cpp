#include <iostream>
#include <queue>
using namespace std;
int main()
{
	priority_queue<int> pq;
	int num = 0;
	int dasom = 0;
	int input = 0;
	int plus = 0;
	int save = 0;
	cin >> num >> dasom;
	for (int i = 0; i < num - 1; i++)
	{
		cin >> input;
		pq.push(input);
	}
	if (num == 1)
	{
		cout << 0;
		return 0;
	}

	while (dasom + plus <= pq.top())
	{
		save = pq.top();
		pq.pop();
		save--;
		plus++;
		pq.push(save);
	}
	cout << plus;
}