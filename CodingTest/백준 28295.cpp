#include <iostream>

using namespace std;

int main()
{
	int idx = 0;
	int input;
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		idx = (idx + input) % 4;
	}

	if (idx == 0)
		cout << "N";
	else if (idx == 1)
		cout << "E";
	else if (idx == 2)
		cout << "S";
	else if (idx == 3)
		cout << "W";
}