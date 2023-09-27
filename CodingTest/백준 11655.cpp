#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z'))
		{
			if (s[i] + 13 > 'z')
				cout << (char)(s[i] - 13);
			else
				cout << (char)(s[i] + 13);
		}
		else if ((s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (s[i] + 13 > 'Z')
				cout << (char)(s[i] - 13);
			else
				cout << (char)(s[i] + 13);
		}
		else
			cout << s[i];
	}
}