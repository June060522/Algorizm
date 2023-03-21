#include <iostream>

using namespace std;

int main()
{
	int boys = 1, girls = 1;

	while (true)
	{
		cin >> boys >> girls;
		if (boys == 0 && girls == 0)
			return 0;

		cout << boys + girls << endl;
	}
}