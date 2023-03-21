#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input = "";
	while (true)
	{
		getline(cin,input);
		if (input == "")
			return 0;
		cout << input << endl;
	}
}