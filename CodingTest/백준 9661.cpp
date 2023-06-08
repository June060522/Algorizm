#include <iostream>
using namespace std;

int main()
{
	long long int input;
	cin >> input;
	if (input % 5 == 0 || input % 5 == 2)
		cout << "CY";
	else
		cout << "SK";
}