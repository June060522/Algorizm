#include <iostream>
#include <stack>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int repeat;
	int iinput;
	string sinput;
	cin >> repeat;
	stack<int> a;
	for (int i = 0; i < repeat; i++)
	{
		cin >> sinput;
		if (sinput == "1")
		{
			cin >> iinput;
			a.push(iinput);
		}
		else if (sinput == "2")
		{
			if (a.size() > 0)
			{
				cout << a.top() << '\n';
				a.pop();
			}
			else
			{
				cout << "-1" << '\n';
			}
		}
		else if (sinput == "3")
		{
			cout << a.size() << '\n';
		}
		else if (sinput == "4")
		{
			if (a.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else
		{
			if (a.size() > 0)
				cout << a.top() << '\n';
			else
				cout << "-1" << '\n';
		}
	}
}