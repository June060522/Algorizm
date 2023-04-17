#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (a + b + c == 0)
			return 0;
		if (a > b)
			swap(a, b);
		if (b > c)
			swap(b, c);

		if (a * a + b * b == c * c)
			cout << "right" << "\n";
		else
			cout << "wrong" << "\n";
	}
}