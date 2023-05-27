#include <iostream>
using namespace std;
int main()
{
	long long int a, b, answer = 1;
	cin >> a >> b;
	for (int i = 0; i < b - (a % b); i++)
		answer *= a / b;
	for (int i = 0; i < (a % b); i++)
		answer *= a / b + 1;
	cout << answer;
}