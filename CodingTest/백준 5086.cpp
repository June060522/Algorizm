#include <iostream>

using namespace std;

int main()
{
	int a, b;
	while (true)
	{
		cin >> a >> b;
		if (a + b == 0)
			return 0;

		if (a % b == 0)
			cout << "multiple";
		else if (b % a == 0)
			cout << "factor";
		else
			cout << "neither";
		cout << endl;
	}
}