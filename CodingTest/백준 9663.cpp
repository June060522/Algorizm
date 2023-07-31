#include <iostream>
using namespace std;

int zoneSize = 0;
int answer = 0;
pair<int, int> zone[16];

bool Check(int idx)
{
	int checkA = zone[idx].first;
	int checkB = zone[idx].second;
	for (int i = 1; i < idx; i++)
	{
		if (checkA == zone[i].first || checkB == zone[i].second 
			|| ((checkA - zone[i].first) == (checkB - zone[i].second))
			|| ((checkA - zone[i].first) == -(checkB - zone[i].second))
			|| -((checkA - zone[i].first) == (checkB - zone[i].second))
			|| -((checkA - zone[i].first) == -(checkB - zone[i].second)))
			return false;
	}
	return true;
}

void BackTracking(int cnt)
{
	if (cnt > zoneSize)
	{
		++answer;
		return;
	}
	else
	{
		for (int i = 1; i <= zoneSize; i++)
		{
			zone[cnt] = make_pair(cnt,i);
			if (Check(cnt))
			{
				BackTracking(cnt + 1);
			}
		}
	}
}

int main()
{
	cin >> zoneSize;
	BackTracking(1);
	cout << answer;
}