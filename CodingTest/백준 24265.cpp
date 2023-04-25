#include <iostream>
using namespace std;
int main()
{
	long long input = 0;
	long long sum = 0;
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		sum += i;
	}
	cout << sum << endl << 2;
}