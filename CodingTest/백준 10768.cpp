#include <iostream>

using namespace std;

int main()
{
	int month, day;
	cin >> month >> day;
	if (month == 2 && day == 18)
		cout << "Special";
	else if ((month == 2 && day < 18) || month == 1)
		cout << "Before";
	else
		cout << "After";
}