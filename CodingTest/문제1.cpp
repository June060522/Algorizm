#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str, str1;
	getline(cin, str);
	getline(cin, str1);

	while (str.find(' ') != string::npos)
	{
		str.erase(str.find(' '),1);
	}while (str1.find(' ') != string::npos)
	{
		str1.erase(str1.find(' '),1);
	}
	cout << str << str1;
}