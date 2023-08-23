#include <iostream>
using namespace std;

int main()
{
	int input;
	int h = 0, s = 0;
	int repeat;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input % 2 == 0)
			h++;
		else
			s++;
	}
	if (h > s)
		cout << "Happy";
	else
		cout << "Sad";
}