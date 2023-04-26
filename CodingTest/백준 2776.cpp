#include <iostream>
#include <set>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int repeat = 0;
	int repeat2 = 0;
	int input = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		set<int> s;
		cin >> repeat2;
		for (int j = 0; j < repeat2; j++)
		{
			cin >> input;
			s.insert(input);
		}

		cin >> repeat2;
		for (int j = 0; j < repeat2; j++)
		{
			cin >> input;
			if (s.find(input) == s.end())
				cout << 0 << '\n';
			else
				cout << 1 << '\n';
		}
	}
}