#include <iostream>
#include <queue>

using namespace std;

int main()
{
	priority_queue<int> present;

	int m, n, input;
	bool can = true;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		present.push(input);
	}
	for (int j = 0; j < n; j++)
	{
		cin >> input;

		if (present.top() >= input)
		{
			present.push(present.top() - input);
			present.pop();
		}
		else
			can = false;

	}

	if (can)
		cout << "1";
	else
		cout << "0";
}