#include <iostream>
using namespace std;
int main()
{
	long long a, b;
	int save = 0;
	int answer = 0;
	cin >> a >> b;
	if (a > b)
		swap(a, b);
	if (a > 60)
	{
		answer += 15 * 60;
		a -= 60;
	}
	else
	{
		answer += 15 * a;
		save = 60 - a;
		a = 0;
	}
	answer += 30 * a;

	if (b > 60 + save)
	{
		answer += 15 * (60 + save);
		b -= 60 + save;
	}
	else
	{
		answer += 15 * b;
		b = 0;
	}
	answer += 30 * b;
	cout << answer * 100;
}