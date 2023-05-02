#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int avg = (a + b + c) / 3;
	int answer = (avg - a) + (avg - (b -(avg - a)));
	cout << answer;
}