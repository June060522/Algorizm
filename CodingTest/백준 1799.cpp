#include <iostream>
#include <algorithm>

using namespace std;

int zone[11][11];
int answer = 0;
int zoneSize = 0;//검은색 흰색 나누어서

bool CheckBishop(int x, int y)
{
	for (size_t i = 1; i < zoneSize; i++)
	{
		if (y - i > 0 && x - i > 0 && zone[x - i][y - i] == 2)
			return false;

		if (y + i <= zoneSize && x - i > 0 && zone[x - i][y + i] == 2)
			return false;

		if (y - i > 0 && x + i <= zoneSize && zone[x + i][y - i] == 2)
			return false;

		if (y + i <= zoneSize && x + i <= zoneSize && zone[x + i][y + i] == 2)
			return false;
	}

	return true;
}

void BackTraking(int x, int y, int cnt)
{
	bool isFisrt = false;
	for (size_t i = 1; i <= zoneSize; i++)
	{
		for (size_t j = 1; j <= zoneSize; j++)
		{
			if (!isFisrt)
			{
				isFisrt = true;
				i = x;
				j = y;
			}

			if (zone[i][j] == 0 || zone[i][j] == 2)
				continue;

			if (CheckBishop(i,j))
			{
				zone[i][j] = 2;
				cnt++;
				answer = max(cnt, answer);

				BackTraking(i, j, cnt);

				zone[i][j] = 1;
				cnt--;
			}

		}
	}
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	cin >> zoneSize;
	for (size_t i = 1; i <= zoneSize; i++)
	{
		for (size_t j = 1; j <= zoneSize; j++)
		{
			cin >> zone[i][j];
		}
	}

	BackTraking(1, 1, 0);
	cout << answer;
}