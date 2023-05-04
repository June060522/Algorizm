#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (i % 7 + i % 11 == 0)
			cout << "Wiwat!";
		else if (i % 7 == 0)
			cout << "Hurra!";
		else if (i % 11 == 0)
			cout << "Super!";
		else cout << i;

		cout << '\n';
	}
}