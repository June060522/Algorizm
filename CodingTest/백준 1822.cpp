#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int>s;
	int repeat1, repeat2, input;
	cin >> repeat1 >> repeat2;

	for (int i = 0; i < repeat1; i++)
	{
		cin >> input;
		s.insert(input);
	}

	for (int i = 0; i < repeat2; i++)
	{
		cin >> input;
		if (s.find(input) != s.end())
			s.erase(input);
	}

	if (s.size() != 0)
	{
		cout << s.size() << '\n';
		for (auto i : s)
			cout << i << " ";
	}
	else
		cout << 0;
}