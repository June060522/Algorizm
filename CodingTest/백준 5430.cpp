#include <iostream>
#include <string>
#include <deque>

using namespace std;
deque<int> dq;
int main()
{
	bool isR = true;
	bool isPrint = true;
	int a = 0;
	string input;
	int size;
	string num;
	int saveNum = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		dq.clear();
		isPrint = true;
		isR = true;
		cin >> input >> size >> num;
		if(size > 0)
		for (int j = 1; j < num.length(); j++)
		{
			if (num[j] == ',' || num[j] == ']')
			{
				dq.push_front(saveNum);
				saveNum = 0;
			}
			else
				saveNum = saveNum * 10 + (num[j] - '0');
		}

		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] == 'R')
			{
				if (isR)
					isR = false;
				else
					isR = true;
			}
			else
			{
				if (dq.empty())
				{
					cout << "error\n";
					isPrint = false;
					break;
				}
				if (isR)
					dq.pop_back();
				else
					dq.pop_front();
			}
		}
		
		if (!isPrint)
			continue;

		cout << '[';
		if(!dq.empty())
		if (isR)
		{
			cout << dq.back();
			dq.pop_back();
		}
		else
		{
			cout << dq.front();
			dq.pop_front();
		}
		while (!dq.empty())
		{
			if (isR)
			{
				cout << "," <<dq.back();
				dq.pop_back();
			}
			else
			{
				cout << "," << dq.front();
				dq.pop_front();
			}
		}
		cout << "]\n";
	}
}