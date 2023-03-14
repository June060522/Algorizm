#include <iostream>

using namespace std;

int main()
{
	int answer[6] = { 1,1,2,2,2,8 };
	int input = 0;
	for (int i = 0; i < 6; i++)
	{
		cin >> input;
		cout << answer[i] - input << " ";
	}
}