#include <iostream>
using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		if (str == "end")
			break;
		int idx = 0;
		int idx2 = 0;
		bool isCan = true;
		bool ismo = false;

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == str[i + 1] && (str[i] != 'e' && str[i] != 'o'))
				isCan = false;

			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			{
				ismo = true;
				idx++;
				idx2 = 0;
			}
			else
			{
				idx2++;
				idx = 0;
			}

			if (idx == 3 || idx2 == 3)
				isCan = false;
		}
		if(!isCan || !ismo)
			cout << "<" << str << ">" << " is not acceptable.\n";
		else
			cout << "<" << str << ">" << " is acceptable.\n";
	}
}