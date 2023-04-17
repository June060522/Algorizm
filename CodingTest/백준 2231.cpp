#include <iostream>

using namespace std;

int main()
{
	int num,save,check;
	cin >> num;
	for (int i = 1; i < num; i++)
	{
		save = 0;
		check = i;
		while (check != 0)
		{
			save += check % 10;
			check /= 10;
		}
		if (num == i + save)
		{
			cout << i;
			return 0;
		}
	}

	cout << 0;
}