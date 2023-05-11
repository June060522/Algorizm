#include <iostream>
using namespace std;

int main()
{
	int a;
	int answer = 0;
	cin >> a;
	string input;
	for (int i = 0; i < a; i++)
	{
		cin >> input;
		int save = 0;
		for (int i = 2; i < input.length(); i++)
			save = save * 10 + input[i] - '0';

		if (save <= 90)
			answer++;
	}

	cout << answer;
}