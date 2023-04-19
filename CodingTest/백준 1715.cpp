#include <iostream>
#include <queue>
using namespace std;
int main()
{
	priority_queue<int, vector<int>, greater<>> q;
	int num = 0;
	int input;
	int answer = 0;
	int a, b;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> input;
		q.push(input);
	}

	while (q.size()!= 1)
	{
		a = q.top();
		q.pop();
		b = q.top();
		q.pop();
		answer += a + b;
		q.push(a + b);
	}
	cout << answer;
}