#include <iostream>

using namespace std;

int main()
{
	int answer = 0;
	int a, b, c;
	cin >> a >> b >> c;

	if (a % 2 == 1)
		answer = a;
	if (b % 2 == 1)
		answer = (answer == 0) ? b : answer * b;
	if (c % 2 == 1)
		answer = (answer == 0) ? c : answer * c;

	if (answer == 0)
		cout << a * b * c;
	else
		cout << answer;
}