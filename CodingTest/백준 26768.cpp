#include <iostream>
using namespace std;
int main()
{
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'a')
			cout << 4;
		else if (a[i] == 'e')
			cout << 3;
		else if (a[i] == 'i')
			cout << 1;
		else if (a[i] == 'o')
			cout << 0;
		else if (a[i] == 's')
			cout << 5;
		else
			cout << a[i];
	}
}