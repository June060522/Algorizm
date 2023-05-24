#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	b -= a;
	if (b < 1)
	{
		cout << "Congratulations, you are within the speed limit!";
	}
	else if (b < 21)
	{
		cout << "You are speeding and your fine is $100.";
	}
	else if (b < 31)
	{
		cout << "You are speeding and your fine is $270.";
	}
	else
		cout << "You are speeding and your fine is $500.";
}