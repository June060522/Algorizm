#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	string input;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		for (int i = 0; i < input.length(); i++)
		{
			if(i == 0)
				cout << input[i];
			else if (input[i] != input[i - 1])
				cout << input[i];
		}
		cout << endl;
	}
}