#include <iostream>

using namespace std;

int main()
{
	int length = 0;
	int num = 0;
	cin >> length;

	for (int i = 1; i <= length; i++)
		num += i;

	for (int i = 1; i <= length; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << num << ' ';
			num--;
		}
		cout << endl;
	}
}