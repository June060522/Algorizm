#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	int num1, num2;
	int saveNum = 0;
	cin >> num1 >> num2;
	for (int i = 1; i <= num1; i++)
		q.push(i);

	cout << "<";
	while (q.size() != 1)
	{
		for (int i = 1; i < num2; i++)
		{
			saveNum = q.front();
			q.pop();
			q.push(saveNum);
		}
		cout << q.front() << ", ";
		q.pop();
	}

	cout << q.front() << ">";
}