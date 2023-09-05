#include <iostream>
#include <algorithm>

using namespace std;

int zone[11][11];
int answerBlack = 0;
int answerWhite = 0;
int zoneSize = 0;
pair<int, int> information[20];

bool CheckInfo(int x, int y, int cnt)
{
	for (size_t i = 0; i < cnt; i++)
	{
		if (abs(x - information[i].first) == abs(y - information[i].second))
			return false;
	}
	return true;
}

void BackTraking(int cnt, int num)
{
	for (size_t i = num; i < zoneSize * zoneSize; i += 2)
	{
		int x = i / zoneSize;
		int y = i % zoneSize;
		if (zoneSize % 2 == 0)
		{
			if (i % 2 == 0)
				y = y + (x % 2);
			else
				y = y - (x % 2);
		}

		if (zone[x][y] == 1)
		{
			if (CheckInfo(x, y, cnt))
			{
				information[cnt++] = { x,y };
				if(i % 2 == 0)
					answerBlack = max(answerBlack, cnt);
				else
					answerWhite = max(answerWhite, cnt);
				BackTraking(cnt, i);

				cnt--;
			}
		}
	}
}

int main()
{
	cin >> zoneSize;
	for (size_t i = 0; i < zoneSize; i++)
		for (size_t j = 0; j < zoneSize; j++)
			cin >> zone[i][j];

	BackTraking(0,0);
	BackTraking(0,1);
	cout << answerBlack + answerWhite;
}