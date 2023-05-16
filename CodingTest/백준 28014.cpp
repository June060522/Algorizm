#include <iostream>
using namespace std;
int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int repeat = 0;
	int answer = 0;
	int input = 0;
	int saveNum = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input >= saveNum)
		{
			answer++;
		}
		saveNum = input;

	}
	cout << answer;
}