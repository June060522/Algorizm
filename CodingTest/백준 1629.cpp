#include <iostream>

using namespace std;

long long a, b, c;
long long int f(long long a, long long b,long long c)
{
	if (b == 1)
		return a % c;
	long long temp = f(a, b / 2, c) % c;

	if (b % 2 == 0)
		return (temp * temp) % c;
	else
		return (((temp * temp) % c) * a) % c;
}

int main()
{
	ios::sync_with_stdio(false);

	cin >> a >> b >> c;
	cout << f(a,b,c);
}