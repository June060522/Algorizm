#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int repeat;
	int iinput;
	string sinput;
	cin >> repeat;
	stack<int> a;
	for (int i = 0; i < repeat; i++)
	{
		cin >> sinput;
		if (sinput == "push")
		{
			cin >> iinput;
			a.push(iinput);
		}
		else if(sinput == "pop")
		{
			if (a.size() > 0)
			{
				cout << a.top() << endl;
				a.pop();
			}
			else
			{
				cout << "-1" << endl;
			}
		}
		else if (sinput == "size")
		{
			cout << a.size() << endl;
		}
		else if (sinput == "empty")
		{
			if (a.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else
		{
			if (a.size() > 0)
				cout << a.top() << endl;
			else
				cout << "-1" << endl;
		}
	}
}