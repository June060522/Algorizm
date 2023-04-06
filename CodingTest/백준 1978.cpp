#include <iostream>

using namespace std;

bool sosu(int num);
int main()
{
	int repeat = 0;
	int num = 0;
	int cnt = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> num;
		if (sosu(num))
			cnt++;
	}

	cout << cnt;
}

bool sosu(int num)
{
	if (num == 1)
		return false;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}