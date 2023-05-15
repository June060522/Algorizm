#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int input = 0;
	int answer = 0;
	cin >> num;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		if (input == num)
			answer++;
	}
	cout << answer;
}