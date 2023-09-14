#include <iostream>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> n;

	for (int i = 0; i < 100000; i++)
		s += "WelcomeToSMUPC";
	cout << s[n - 1];
}