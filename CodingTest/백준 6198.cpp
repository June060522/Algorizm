#include <iostream>
#include <stack>

using namespace std;

stack<int> s;//5 4 3 2 1
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int repeat = 0;
	cin >> repeat;
	long long sum = 0;
	int input = 0;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;

		while (!s.empty() && input >= s.top())
		{
			s.pop();
		}
		s.push(input);
		sum += s.size() - 1;
	}

	cout << sum;
}