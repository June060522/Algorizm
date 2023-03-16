#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	char arr[5][15] = { NULL };
	for (int i = 0; i < 5; i++)
	{
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			arr[i][j] = str[j];
		}
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j][i] != NULL)
				cout << arr[j][i];
		}
	}
}