#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int repeat, input, sum = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		sum += input;
	}
	cout << sum;
}