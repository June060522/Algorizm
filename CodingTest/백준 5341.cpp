#include <iostream>
using namespace std;

int F(int i)
{
	if (i == 0)
		return 0;
	return i + F(i - 1);
}

int main()
{
	int num;
	while (true)
	{
		cin >> num;
		if (num == 0)
			break;

		cout << F(num) << '\n';

	}
}