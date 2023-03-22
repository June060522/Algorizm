#include <iostream>

using namespace std;

int main()
{
	string input = "";
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] > 96)
			input[i] -= 32;
		else
			input[i] += 32;

		cout << input[i];
	}
}