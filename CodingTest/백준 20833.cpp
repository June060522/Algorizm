#include <iostream>
using namespace std;

int main()
{
	int input = 0;
	long long answer = 0;
	cin >> input;
	for (int i = 1; i <= input; i++)
		answer += i * i * i;

	cout << answer;
}