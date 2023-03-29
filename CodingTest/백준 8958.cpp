#include <iostream>

using namespace std;

int main()
{
	int repeat = 0, sum = 0, plus = 1;
	cin >> repeat;
	string input = " ";
	for (int i = 0; i < repeat; i++)
	{
		sum = 0;
		plus = 1;
		cin >> input;
		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] == 'X')
			{
				plus = 1;
			}
			else
			{
				sum += plus;
				++plus;
			}
		}

		cout << sum <<endl;
	}
}