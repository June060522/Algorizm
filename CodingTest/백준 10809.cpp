#include <iostream>
#include <string>

using namespace std;

int main()
{
	int alp[26] = { 0 };
	string a = "";

	for (int i = 0; i < 26; i++)
		alp[i] = -1;

	cin >> a;
	for (int i = 0; i < a.size(); i++)
	{
		char b = a[i];
		if(alp[b-97] == -1)
			alp[b - 97] = i;
	}

	for (int i = 0; i < 26; i++)
		cout << alp[i]<<" ";
}