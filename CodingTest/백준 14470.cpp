#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int answer = 0;
	if (a < 0)
	{
		answer += c * a * -1;
		a = 0;
	}
	if (a == 0)
	{
		answer += d;
	}
	if (a >= 0)
	{
		answer += e * (b - a);
	}

	cout << answer;
}