#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	int chan = 0;
	int ban = 0;
	int moo = 0;
	int input;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input == 1)
			chan++;
		else if (input == -1)
			ban++;
		else
			moo++;
	}
	if (repeat % 2 == 1)
	{
		if (moo > repeat / 2)
			cout << "INVALID";
		else if (chan > ban)
			cout << "APPROVED";
		else
			cout << "REJECTED";
	}
	else if (repeat % 2 == 0)
	{
		if (moo >= repeat / 2)
			cout << "INVALID";
		else if (chan > ban)
			cout << "APPROVED";
		else
			cout << "REJECTED";
	}

}