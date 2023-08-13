#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int arr[27];
	string s;
	while (cin >> s)
	{
		if (s == "aa") break;
		for (int i = 0; i < s.length(); i++)
		{
			arr[s[i] - 'a']++;
			cout << arr[s[i] - 'a'];
		}
	}

	int answer = 0;
	for (int i = 0; i < 26; i++)
	{
		answer = max(arr[i], answer);
	}

	for (int i = 0; i < 26; i++)
	{
		if (answer == arr[i])
			cout << arr[i] + 'a';
	}
}