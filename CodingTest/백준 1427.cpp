#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string a;
	cin >> a;
	char c[10];
	for (int i = 0; i < a.length(); i++)
		c[i] = a[i];

	sort(c, c + a.length(),greater<>());

	for (int i = 0; i < a.length(); i++)
		cout << c[i];
}