#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int input = 0;
	while (true)
	{
		cin >> input;
		if (input == -1)break;
		sum += input;
	}
	cout << sum;
}