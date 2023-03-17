#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> a;
	int repeat = 0;
	int input = 0;
	int sum = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input == 0)
			a.pop();
		else
			a.push(input);
	}

	while(a.size() > 0)
	{
		sum += a.top();
		a.pop();
	}
	cout << sum;
}