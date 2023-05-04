#include <iostream>

using namespace std;

int main()
{
	string a;
	cin >> a;
	int l = 0, j = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'A')
			l++;
		else
			j++;
	}
	cout << l << " : " << j;
}