#include <iostream>
using namespace std;

void print(int num)
{
	if (num == 0)
	{
		cout << "0000" << endl;
		cout << "0  0" << endl;
		cout << "0  0" << endl;
		cout << "0  0" << endl;	
		cout << "0000" << endl;
	}
	else if (num == 1)
	{
		cout << "   1" << endl;
		cout << "   1" << endl;
		cout << "   1" << endl;
		cout << "   1" << endl;
		cout << "   1" << endl;
	}
	else if (num == 2)
	{
		cout << "2222" << endl;
		cout << "   2" << endl;
		cout << "2222" << endl;
		cout << "2" << endl;
		cout << "2222" << endl;
	}
	else if (num == 3)
	{
		cout << "3333" << endl;
		cout << "   3" << endl;
		cout << "3333" << endl;
		cout << "   3" << endl;
		cout << "3333" << endl;
	}
	else if (num == 4)
	{
		cout << "4  4" << endl;
		cout << "4  4" << endl;
		cout << "4444" << endl;
		cout << "   4" << endl;
		cout << "   4" << endl;
	}
	else if (num == 5)
	{
		cout << "5555" << endl;
		cout << "5" << endl;
		cout << "5555" << endl;
		cout << "   5" << endl;
		cout << "5555" << endl;
	}
	else if (num == 6)
	{
		cout << "6666" << endl;
		cout << "6" << endl;
		cout << "6666" << endl;
		cout << "6  6" << endl;
		cout << "6666" << endl;
	}
	else if (num == 7)
	{
		cout << "7777" << endl;
		cout << "   7" << endl;
		cout << "   7" << endl;
		cout << "   7" << endl;
		cout << "   7" << endl;
	}
	else if (num == 8)
	{
		cout << "8888" << endl;
		cout << "8  8" << endl;
		cout << "8888" << endl;
		cout << "8  8" << endl;
		cout << "8888" << endl;
	}
	else if (num == 9)
	{
		cout << "9999" << endl;
		cout << "9  9" << endl;
		cout << "9999" << endl;
		cout << "   9" << endl;
		cout << "   9" << endl;
	}
}

int main()
{
	string num;
	cin >> num;
	for (int i = 0; i < num.length(); i++)
	{
		print(num[i] - '0');
		cout << endl;
	}
}