#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	if (m == 1 || m == 2)
		cout << "NEWBIE!";
	else if (n >= m)
		cout << "OLDBIE!";
	else
		cout << "TLE!";
}