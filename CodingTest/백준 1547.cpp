#include <iostream>
using namespace std;

int main()
{
	int repeat = 0;
	int answer = 1;
	cin >> repeat;
	int a, b;
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b;
		if (a == answer)
			answer = b;
		else if (b == answer)
			answer = a;
	}

	cout << answer;
}