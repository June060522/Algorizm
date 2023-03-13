#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	int num = 0;
	string str = "";

	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> num >> str;
		for (int j = 0; j < str.size(); j++)
		{
			for (int k = 0; k < num; k++)
			{
				cout << str[j];
			}
		}
		cout << endl;
	}
}