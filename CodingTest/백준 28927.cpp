#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	int c, d, e;

	cin >> c >> d >> e;
	a = c * 3 + d * 20 + e * 120;
	cin >> c >> d >> e;
	b = c * 3 + d * 20 + e * 120;
	if (a > b)
		cout << "Max";
	else if (a == b)
		cout << "Draw";
	else
		cout << "Mel";

}