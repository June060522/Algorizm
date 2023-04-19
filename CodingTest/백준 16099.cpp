#include <iostream>
using namespace std;
int main()
{
	int repeat = 0;
	long long int a, b, c, d;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b >> c >> d;
		if (a * b > c * d)
			cout << "TelecomParisTech" << endl;
		else if (a * b < c * d)
			cout << "Eurecom" << endl;
		else if (a * b == c * d)
			cout << "Tie" << endl;
	}
}