#include<iostream>

using namespace std;

int main()
{
	string input;
	string answer;

	cin >> input;

	answer += input[0];

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '-')
			answer += input[i + 1];
	}


	cout << answer;
}