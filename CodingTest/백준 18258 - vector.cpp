#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int repeat = 0;
	vector<int> v;
	string sinput;
	int num;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> sinput;
		if (sinput == "push")
		{
			cin >> num;
			v.push_back(num);
		}
		else if (sinput == "pop")
		{
			if (v.empty())
				cout << "-1" << "\n";
			else
			{
				cout << v.front() << "\n";
				v.erase(v.begin(),v.begin()+1);
			}
		}
		else if (sinput == "size")
		{
			cout << v.size() << "\n";
		}
		else if (sinput == "empty")
		{
			if (v.empty())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (sinput == "front")
		{
			if (v.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << v.front() << "\n";
			}
		}
		else if (sinput == "back")
		{
			if (v.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << v.back() << "\n";
			}
		}
	}
}