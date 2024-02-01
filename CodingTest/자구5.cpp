#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	for (int i = 0; i < b.length(); i++)
	{
		if (a.find(b[i]) == string::npos)
		{
			cout << 0;
			return 0;
		}
		else
		{
			a.erase(a.find(b[i]), 1);
		}
	}

		cout << 1;

}