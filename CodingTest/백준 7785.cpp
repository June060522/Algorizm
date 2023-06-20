#include <iostream>
#include <set>

using namespace std;

int main()
{
	string str,str2;
	set<string,greater<string>> s;
	int repeat;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> str >> str2;
		if (s.find(str) == s.end())
			s.insert(str);
		else
			s.erase(str);
	}

	for (auto i : s)
		cout << i << '\n';
}