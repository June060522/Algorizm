#include <iostream>
using namespace std;
int main()
{
	long long answer = 2;
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++)
		answer += answer - 1;
	cout << answer * answer;
}