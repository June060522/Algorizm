#include <iostream>
using namespace std;

int main()
{
	int repeat = 0;
	string z;
	double a, b, c;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> z >> a >> b >> c;
		cout << z << " " << a + b + c << " ";
		if (a + b + c >= 55 && a >= 10.5f && b >= 7.5f && c >= 12)
			cout << "PASS";
		else
			cout << "FAIL";

		cout << '\n';
	}
}