#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int m, n;
	int cha = 100000, answer;
	cin >> m >> n;
	int input;
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		if (abs(input - n) < cha)
		{
			cha = abs(input - n);
			answer = input;
		}
	}
	cout << answer;
}