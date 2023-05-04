#include <iostream>
using namespace std;

int main()
{
	string a;
	int b, c = 0, d = 0;

	cin >> a;
	b = a.length();
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == ':')
			c++;
		if (a[i] == '_')
			d++;
	}
	cout << b + c + d * 5;
}