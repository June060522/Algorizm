#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	int input = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		cout << input << " is ";
		if (input < 0)
			input *= -1;

		if (input % 2 == 0)
			cout << "even" << endl;
		else
			cout << "odd" << endl;
	}
}