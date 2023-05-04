#include <iostream>
using namespace std;
int main()
{
	string input;
	int one,two;
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input >> one >> two;
		for (int j = 0; j < input.length(); j++)
		{
			if (j >= one && j < two)
				continue;

			cout << input[j];
		}
		cout << endl;
	}
}