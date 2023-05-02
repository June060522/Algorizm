#include <iostream>
using namespace std;
int main()
{
	int a;
	int answer = 1;
	cin >> a;
	for (int i = 0; i < a; i++)
		answer *= 2;
	cout << answer;
}