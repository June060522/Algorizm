#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int cnt = 0;
	int save = 0;
	int savenum = -1;
	cin >> num;
	while (num > 30)
	{
		num -= 5;
		cnt++;
	}
	int i = 6;
	while (savenum != 0)
	{
		if (i < 0)
		{
			cout << "-1";
			return 0;
		}
		save = cnt;
		savenum = num;
		for (int j = 0; j < i; j++)
		{
			savenum -= 5;
			save++;
		}
		while (savenum > 0)
		{
			savenum -= 3;
			save++;
		}
		i--;
	}
	cout << save;
}