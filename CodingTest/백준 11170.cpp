#include <iostream>

using namespace std;

int main()
{
	int repeat;
	cin >> repeat;
	int a, b;
	for (int i = 0; i < repeat; i++)
	{
		int answer = 0;
		cin >> a >> b;

		for (int j = a; j <= b; j++)
		{
			int save = j;
			do
			{
				if (save % 10 == 0) answer++;
				save /= 10;
			} while (save > 0);
		}
		cout << answer << '\n';
	}
}