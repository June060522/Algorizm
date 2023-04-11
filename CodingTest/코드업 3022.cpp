#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> a;
	stack<int> b;
	stack<int>answer;
	string inputa = "";
	string inputb = "";
	bool isZero = true;
	cin >> inputa >> inputb;

	if (inputa.length() < inputb.length() || (inputa.length() == inputb.length() && inputa < inputb))
	{
		cout << '-';
		swap(inputa, inputb);
	}

	for (int i = 0; i < inputa.length(); i++)
	{
		a.push(inputa[i] - '0');
	}

	for (int i = 0; i < inputa.length() - inputb.length(); i++)
	{
		b.push(0);
	}

	for (int i = 0; i < inputb.length(); i++)
	{
		b.push(inputb[i] - '0');
	}
	int save = 0;
	while (!a.empty())
	{
		save = a.top() - b.top();
		a.pop();
		b.pop();
		if (save < 0)
		{
			save += 10;
			a.top()--;
		}
		answer.push(save);
	}

	while (!answer.empty())
	{
		if (answer.top() != 0)
			isZero = false;
		if(!isZero)
			cout << answer.top();
		answer.pop();
	}

	if (isZero)
		cout << 0;
}