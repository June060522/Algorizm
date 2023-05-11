#include <iostream>
using namespace std;

int main()
{
	string s, s1;
	while (cin >>s)
	{
		cin >> s1;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'i')
				cout << "e";
			else if (s[i] == 'e')
				cout << "i";
			else if (s[i] == 'E')
				cout << "I";
			else if (s[i] == 'I')
				cout << "E";
			else
				cout << s[i];
		}

		cout << " ";

		for (int i = 0; i < s1.length(); i++)
		{
			if (s1[i] == 'i')
				cout << "e";
			else if (s1[i] == 'e')
				cout << "i";
			else if (s1[i] == 'E')
				cout << "I";
			else if (s1[i] == 'I')
				cout << "E";
			else
				cout << s1[i];
		}

		cout << '\n';
	}
}