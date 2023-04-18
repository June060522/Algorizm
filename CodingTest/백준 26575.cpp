#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	double a, b, c;
	cout << fixed;
	cout.precision(2);
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b >> c;
		cout << '$' << a * b * c << endl;
	}
}