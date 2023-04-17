#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	bool check = true;
	while (true)
	{
		cin >> str;
		check = true;

		if (str == "0")
			return 0;

		for (int i = 0; i < str.length() / 2; i++)
		{
			if (str[0 + i] != str[str.length() - 1 - i])
				check = false;
		}

		if (check)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
}