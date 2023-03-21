#include <iostream>

using namespace std;

int main()
{
	int price, cnt, money;
	cin >> price >> cnt >> money;
	if (price * cnt <= money)
		cout << "0";
	else
		cout << price * cnt - money;
}