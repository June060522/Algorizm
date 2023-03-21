#include <iostream>

using namespace std;

int main()
{
	int year, month, day, year1, month1, day1;
	cin >> year >> month >> day >> year1 >> month1 >> day1;
	cout << year1 - year + ((month * 30 + day <= month1 * 30 + day1)? 0 : -1) << endl;
	cout << year1 - year + 1<< endl;
	cout << year1 - year<< endl;
}