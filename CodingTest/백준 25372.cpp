#include <iostream>

using namespace std;

int main()
{
	string str;
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> str;
		if (str.length() >= 6 && str.length() <= 9)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}