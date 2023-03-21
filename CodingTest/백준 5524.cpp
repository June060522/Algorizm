#include <iostream>
#include <string>

using namespace std;

int main()
{
	int repeat = 0;
	string input = "";
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		for(int i = 0; i < input.length(); i++)
			input[i] = tolower(input[i]);

		cout << input << endl;
	}
}