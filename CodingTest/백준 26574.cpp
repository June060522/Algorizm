#include <iostream>

using namespace std;

int main()
{
	int repeat;
	int num;

	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> num;
		cout << num << " " << num << '\n';
	}
}