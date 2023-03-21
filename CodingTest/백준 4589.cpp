#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	int one, two, three;
	cin >> repeat;

	cout << "Gnomes:" << endl;
	for (int i = 0; i < repeat; i++)
	{
		cin >> one >> two >> three;
		if ((one > two && two > three) || (one < two && two < three))
			cout << "Ordered" << endl;
		else
			cout << "Unordered" << endl;
	}
}