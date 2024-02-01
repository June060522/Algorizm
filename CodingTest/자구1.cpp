#include <iostream>

using namespace std;

int main()
{
	int repeat;
	cin >> repeat;
	int answer = 0;
	int input;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		while (input != 0)
		{
			if (input % 10 == 7)
				answer++;
			input /= 10;

		}
	}
	cout << answer;
}