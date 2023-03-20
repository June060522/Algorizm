#include <iostream>

using namespace std;

int main()
{
	int m = 0, n = 0;
	cin >> m >> n;
	if (m == 1 || n == 1 || (m == 2 && n == 2))
		cout << "YES";
	else
		cout << "NO";
}