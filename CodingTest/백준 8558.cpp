#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	if (num == 0)
	{
		cout << 1;
		return 0;
	}
	int answer = 1;
	for (int i = 1; i <= num; i++)
	{
		answer *= i;
		answer %= 10;
	}

	cout << answer;
}