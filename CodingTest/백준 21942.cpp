#include <iostream>
#include <map>
#include <string>

using namespace std;

const int arr[12]
{
	31,28,31,30,31,30,
	31,31,30,31,30,31
};

long long int month(int month)
{
	long long int Val = 0;
	for (int i = 0; i < month - 1; i++)
	{
		Val += arr[i];
	}
	return Val;
}
int main()
{
	map<pair<string, string>, long long> m;
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int repeat;
	string day;
	int money;
	long long sum1, limit;
	map < string, long long > totalMoney;
	cin >> repeat >> day >> money;
	limit = (day[0] - '0') * 100 + (day[1] - '0') * 10 + (day[2] - '0');//일
	limit = limit * 24 + (day[4] - '0') * 10 + (day[5] - '0');//시간
	limit = limit * 60 + (day[7] - '0') * 10 + (day[8] - '0');//분
	string inputDay, inputTime, inputPart, inputName;
	for (int i = 0; i < repeat; i++)
	{
		cin >> inputDay >> inputTime >> inputPart >> inputName;
		sum1 = month((inputDay[5] - '0') * 10 + (inputDay[6] - '0')); // 달
		sum1 += (inputDay[8] - '0') * 10 + (inputDay[9] - '0'); // 일
		sum1 = sum1 * 24 + (inputTime[0] - '0') * 10 + (inputTime[1] - '0'); // 시간
		sum1 = sum1 * 60 + (inputTime[3] - '0') * 10 + (inputTime[4] - '0'); // 분
		if (m.find(make_pair(inputPart, inputName)) == m.end())
			m.insert(make_pair(make_pair(inputPart, inputName), sum1));
		else
		{
			if (sum1 - m[make_pair(inputPart, inputName)] - limit > 0)
			{
				if (totalMoney.find(inputName) == totalMoney.end())
				{
					totalMoney.insert(make_pair(inputName, (sum1 - m[make_pair(inputPart, inputName)] - limit) * money));
				}
				else
				{
					totalMoney[inputName] += (sum1 - m[make_pair(inputPart, inputName)] - limit) * money;
				}
			}
			m.erase(make_pair(inputPart, inputName));
		}
	}

	if (totalMoney.size() == 0)
		cout << -1;
	else
	{
		while (!totalMoney.empty())
		{
			cout << totalMoney.begin()->first << " " << totalMoney.begin()->second << '\n';
			totalMoney.erase(totalMoney.begin());
		}
	}
}