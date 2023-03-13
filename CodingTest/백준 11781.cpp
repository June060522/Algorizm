#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;

	for (int i = 0; i < 100; i++)
	{
		input = "";
		getline(cin,input);
		if (input == "")
			return 0;
		cout << input << endl;
	}
}