#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;

	for (int i = repeat; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			cout << '*';

		cout << endl;
	}
}