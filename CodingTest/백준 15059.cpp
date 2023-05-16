#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int answer = 0;
	if (a < d)
		answer += d - a;
	if (b < e)
		answer += e - b;
	if (c < f)
		answer += f - c;
	cout << answer;
}