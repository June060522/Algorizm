#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s;
	int idx;
	for (int i = 0; i < 5; i++)
	{
		cin >> idx;
		if (s.find(idx) == s.end())
			s.insert(idx);
		else
			s.erase(idx);
	}

	cout << *s.begin();
}