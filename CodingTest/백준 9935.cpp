#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	string a, b, answer, check;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++)
	{
		answer += a[i];
		if (answer.length() >= b.length())
		{
			check = "";
			for (int i = b.length(); i > 0; i--)
				check += answer[answer.length() - i];
			if (check == b)
				answer.erase(answer.length() - b.length());
		}
	}
	if (answer == "")
		cout << "FRULA";
	else
		cout << answer;
}