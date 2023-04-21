#include <iostream>
#include <string>
using namespace std;
int main()
{
	int k = 0, d = 0, a = 0;
	string s;
	cin >> s;
	int index = 0;
	while (s[index] != '/')
	{
		k += k * 10 + s[index] - '0';
		index++;
	}
	index++;
	while (s[index] != '/')
	{
		d += d * 10 + s[index] - '0';
		index++;
	}
	index++;
	while (index != s.length())
	{
		a += a * 10 + s[index] - '0';
		index++;
	}
	if (k + a < d || d == 0)
		cout << "hasu";
	else
		cout << "gosu";
}