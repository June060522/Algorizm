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
	cin >> inputa >> inputb;

	if (inputa.length() < inputb.length())
		swap(inputa, inputb);

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
		save = a.top() + b.top();
		a.pop();
		b.pop();
		if (save >= 10)
		{
			save -= 10;
			if (!a.empty())
			{
				a.top()++;
			}
			else
			{
				a.push(1);
				b.push(0);
			}
		}
		answer.push(save);
	}

	while (!answer.empty())
	{
		cout << answer.top();
		answer.pop();
	}
}