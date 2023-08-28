#include <iostream>
using namespace std;
int main()
{
	int input, answer;
	cin >> answer;
	for (int i = 0; i < 9; i++)
	{
		cin >> input;
		answer -= input;
	}
	cout << answer;
}