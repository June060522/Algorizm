#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	char input;
	int cnt = 0;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u')
			cnt++;
	}
	cout << cnt;
}