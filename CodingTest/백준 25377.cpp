#include <iostream>
using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	int answer = -1;
	int a, b;
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b;
		if (a <= b)
		{
			if (answer == -1)
				answer = b;
			else
				answer = min(answer, b);
		}
	}

	cout << answer;
}