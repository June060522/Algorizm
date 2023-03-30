#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int repeat = 0;
	queue<int> q;
	string sinput;
	int num;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> sinput;
		if (sinput == "push")
		{
			cin >> num;
			q.push(num);
		}
		else if(sinput == "pop")
		{
			if (q.empty())
				cout << "-1" << "\n";
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (sinput == "size")
		{
			cout << q.size() << "\n";
		}
		else if (sinput == "empty")
		{
			if (q.empty())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (sinput == "front")
		{
			if (q.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << q.front() << "\n";
			}
		}
		else if (sinput == "back")
		{
			if (q.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout <<	q.back() << "\n";
			}
		}
	}
}