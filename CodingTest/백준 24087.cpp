#include <iostream>

using namespace std;

int main()
{
	int answer = 250;
	int a, b, c;
	cin >> a >> b >> c;
	while (a > b)
	{
		b += c;
		answer += 100;
	}

	cout << answer;
}