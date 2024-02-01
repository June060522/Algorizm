#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int a = 0, b =0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'p')
			a++;
		if (s[i] == 'y')
			b++;
	}
	if (a == b)
		cout << "true";
	else
		cout << "false";
}