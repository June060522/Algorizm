#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int save = 0;
	cin >> num;
	save = 1;
	num--;
	while (num > 0)
	{
		num -= save * 6;
		save++;
	}
	cout << save;
}