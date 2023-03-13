#include <iostream>

using namespace std;

int main()
{
	string a = "", b = "";
	cin >> a >> b;
	string temp = "";

	temp = a;
	for (int i = 0; i < 3; i++)
	{
		a[i] = temp[2 - i];
	}
	temp = b;
	for (int i = 0; i < 3; i++)
	{
		b[i] = temp[2 - i];
	}

	if (a > b)
		cout << a;
	else
		cout << b;
}