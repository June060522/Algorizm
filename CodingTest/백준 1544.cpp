#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
	set<string>s;
	string input;
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		sort(input.begin(),input.end());
		if(s.find(input) == s.end());
			s.insert(input);
	}
	cout << s.size();
}