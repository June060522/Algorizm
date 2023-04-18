#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	while (num >= 5)
	{
		num -= 5; 
		cout << "V";
	}

	if (num == 4)
	{
		cout << "IIII";
	}
	else if(num == 3)
	{
		cout << "III";
	}
	else if (num == 2)
	{
		cout << "II";
	}
	else if (num == 1)
	{
		cout << "I";
	}
}