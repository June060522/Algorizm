#include <iostream>
#include <string>

using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	string input = "";
	cin.ignore();
	for (int i = 1; i <= repeat; i++)
	{
		getline(cin, input);
		cout << i << ". " << input << endl;
	}
}