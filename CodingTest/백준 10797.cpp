#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int input = 0;
	int cnt = 0;
	cin >> a;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		if (input == a)
			cnt++;
	}

	cout << cnt;
}