#include <iostream>

using namespace std;

int main()
{
	int size, sum, answer = 0;
	cin >> size >> sum;

	if (size - 1 == 0)
		answer = 0;
	else if (size - 1 == 1)
		answer = sum;
	else
		answer = sum * 2;
	cout << answer;
}
