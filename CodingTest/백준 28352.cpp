#include <iostream>

using namespace std;

int main()
{
	long long int a;
	long long int answer = 1;
	cin >> a;

	for (int i = 1; i <= a; i++)
		answer *= i;

	cout << answer / 60 / 60 / 24 / 7;

}