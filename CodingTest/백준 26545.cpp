#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	long long sum = 0;
	int input = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		sum += input;
	}
	cout << sum;
}