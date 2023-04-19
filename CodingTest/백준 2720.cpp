#include <iostream>
using namespace std;
int main()
{
	int repeat;
	int input;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		cout << input / 25 << " ";
		input %= 25;

		cout << input / 10 << " ";
		input %= 10;

		cout << input / 5 << " ";
		input %= 5;

		cout << input / 1 << " ";
		input %= 1;
		cout << endl;
	}
}