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
		bool isTrue = false;
		cin >> input;
		for (int i = 0; i < input.length(); i++)
		{
			input += input[0];
			input.erase(0,1);
			if (s.find(input) != s.end())
				isTrue = true;
		}
		if(!isTrue)
			s.insert(input);
	}
	cout << s.size();
}