#include <iostream>
#include <list>
#include <queue>
using namespace std;
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	string input;
	int repeat;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		list<char> l;
		list<char>::iterator iter = l.begin();
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == '<')
			{
				if (iter != l.end())
					iter++;
			}
			else if (input[i] == '>')
			{
				if (iter != l.begin())
					iter--;
			}
			else if (input[i] == '-')
			{
				if(iter != l.end())
					iter = l.erase(iter);
			}
			else
			{
				iter = l.insert(iter, input[i]);
			}
		}
		l.reverse();
		for (auto i : l)
			cout << i;
		cout << '\n';
	}
}