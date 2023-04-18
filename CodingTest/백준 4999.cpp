#include <iostream>
using namespace std;
int main()
{
	string str, str1;
	cin >> str >> str1;
	if (str.length() >= str1.length())
		cout << "go";
	else
		cout << "no";
}