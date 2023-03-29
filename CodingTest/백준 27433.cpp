#include <iostream>

using namespace std;

long long int F(int);
int main()
{
	long long int n = 0;
	cin >> n;
	cout << F(n);
}

long long int F(int num)
{
	if (num == 1 || num == 0)
		return 1;
	return num * F(num - 1);
}