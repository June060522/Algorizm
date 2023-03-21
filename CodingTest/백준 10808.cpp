#include <iostream>
#include <string>

using namespace std;

int main()
{
	int alp[26] = { 0 };
	string a = "";

	cin >> a;
	for (int i = 0; i < a.size(); i++)
	{
		char b = a[i];
		alp[b - 97]++;
	}

	for (int i = 0; i < 26; i++)
		cout << alp[i] << " ";
}