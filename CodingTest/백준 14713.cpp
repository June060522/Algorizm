#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int repeat = 0;
	queue<string> q[101];
	string str;
	string saveStr;
	queue<string> answer;
	bool isCheck = false;
	cin >> repeat;
	cin.ignore();
	for (int i = 0; i < repeat; i++)
	{
		int idx = 0;
		getline(cin, str);
		while (idx != str.length() + 1)
		{
			saveStr = "";
			while (idx != str.length() && str[idx] != ' ')
			{
				saveStr += str[idx];
				idx++;
			}
			idx++;
			q[i].push(saveStr);
		}
	}

	int idx = 0;
	getline(cin, str);
	while (idx != str.length() + 1)
	{
		saveStr = "";
		while (idx != str.length() && str[idx] != ' ')
		{
			saveStr += str[idx];
			idx++;
		}
		idx++;
		answer.push(saveStr);
	}

	while (!answer.empty())
	{
		isCheck = false;
		for (int i = 0; i < repeat; i++)
		{
			if (!q[i].empty() && answer.front() == q[i].front())
			{
				answer.pop();
				q[i].pop();
				isCheck = true;
				break;
			}
		}

		if (!isCheck)
		{
			cout << "Impossible";
			return 0;
		}
	}

	for (int i = 0; i < repeat; i++)
	{
		if (!q[i].empty())
		{
			cout << "Impossible";
			return 0;
		}
	}
	cout << "Possible";
}