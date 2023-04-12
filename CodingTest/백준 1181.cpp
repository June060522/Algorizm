#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool F(string,string);
	int repeat = 0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> repeat;
	string* strArr = new string[repeat];
	for (int i = 0; i < repeat; i++)
	{
		cin >> strArr[i];
	}

	sort(strArr, strArr + repeat);
	sort(strArr, strArr + repeat,F);
	string s = "";
	for (int i = 0; i < repeat; i++)
	{
		if (strArr[i] != s)
		{
			s = strArr[i];
			cout << strArr[i] << "\n";
		}
	}
}
bool F(string a, string b)
{
	if (a.length() != b.length()) 
	{
		return a.length() < b.length();
	}
	else {
		return a < b;
	}
}