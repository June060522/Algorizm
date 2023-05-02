#include <iostream>

using namespace std;

int main()
{
	int a;
	string b;
	cin >> a >> b;
	if (b[a - 1] == 'G')
		b[a - 1] = ' ';
	else
		b += 'G';
	cout << b;
}