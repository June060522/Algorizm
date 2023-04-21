#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int a = 2100, b = 2100, input;
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		a = min(a, input);
	}
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		b = min(b, input);
	}
	cout << a + b - 50;
}