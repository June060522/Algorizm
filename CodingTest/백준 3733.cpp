#include <iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a)
	{
		cin >> b;
		a++;
		cout << b / a << endl;
	}
}