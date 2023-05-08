#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		string s;
		cin >> s;
		for (int j = b - 1; j >= 0; j--)
			cout << s[j];

		cout << endl;
	}
}