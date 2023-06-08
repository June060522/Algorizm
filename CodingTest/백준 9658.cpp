#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a % 7 == 1 || a % 7 == 3)
	{
		cout << "CY";
	}
	else
	{
		cout << "SK";
	}
}