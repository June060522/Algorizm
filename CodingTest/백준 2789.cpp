#include <iostream>
using namespace std;
int main()
{
	string answer;
	cin >> answer;
	for (int i = 0; i < answer.length(); i++)
	{
		if (answer[i] == 'C' || answer[i] == 'A'
			|| answer[i] == 'M' || answer[i] == 'B' || answer[i] == 'R'
			|| answer[i] == 'I' || answer[i] == 'D' || answer[i] == 'G' || answer[i] == 'E')
			answer[i] = ' ';
	}
	for (int i = 0; i < answer.length(); i++)
		if(answer[i] != ' ')
		cout << answer[i];
}