#include <iostream>
using namespace std;

int main()
{
	long long a, b;
	long long answer = 0;
	cin >> a >> b;
	answer += b / 2;
	answer *= a;
	if (b % 2 == 1)
		answer += a / 2;
	cout << answer;
}