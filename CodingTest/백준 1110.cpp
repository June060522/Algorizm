#include <iostream>

using namespace std;

int main()
{
	int input = 0;
	int num = 0;
	int chk = 0;
	int save = 0;
	int cnt = 0;
	cin >> input;
	chk = input;
	num = input;
	do
	{
		save = 0;
		if (input < 10)
		{
			num = input * 10 + num;
		}
		else
		{
			save = input % 10;
			input /= 10;
			num = (save) * 10 + ((save + input) % 10);
		}
		input = num;
		cnt++;
	} while (chk != num);
	cout << cnt;
}