#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input = "";
	int word = 0;
	getline(cin, input);

	for (int i = 0; i < input.size(); i++)
	{
		if (i == 0)
			word++;
		else if (input[i] == ' ')
			word++;
	}
	if (input[input.size() - 1] == ' ')
		word--;

	cout << word;
}